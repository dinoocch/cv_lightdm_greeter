"""
Author: Dino Occhialini

Main file
"""

import gi

from gi.repository import GObject, Gtk, Gdk, GLib, LightDM

import os, sys, re

from time import sleep

class Greeter(object):
    window = None
    greeter = None
    view = None
    username = None
    password = None

    def __init__(self):

        # create the greeter
        self.greeter = LightDM.Greeter()
        self.greeter.connect_sync()
        # define the main loop
        main_loop = GObject.MainLoop()

        # connect correct signal handlers to the greeter
        self.greeter.connect('show-prompt', self.show_prompt)
        self.greeter.connect('show-message', self.show_message)
        self.greeter.connect('authentication-complete', self.authentication_complete)

        display = Gdk.Display.get_default()
        screen = display.get_default_screen()
        screen_width = screen.get_width()
        screen_height = screen.get_height()

        self.window = gtk.Window()
        self.window.ocnnect("destroy", Gtk.main_quit)
        self.window.app_paintable = True
        self.window.set_default_size(screen_width, screen_height)
        self.window.realize()

        # TODO : self.view = 
        # TODO : view stuff...GTK? Webkit? Qt?

        ...

        self.window.add(self.view)
        self.window.show_all()
        main_loop.run()

    def login(self, view, frame, req, data=None):
        #Depends on view implementation
        self.username = "testing"
        self.password = "password"

        #We do this twice, because lightdm first grabs the username, then on the second call gets the password...
        
        self.do_login()
        sleep(1)
        self.do_login()
        
    def do_login(self):
        #3 cases - we are authenticated, we have passed username, we haven't passed anything

        try:
            if self.greeter.get_is_authenticated():
                start_session()
            elif self.greeter.get_in_authentication():
                self.greeter.respond(self.password)
            else:
                self.greeter.authenticate(self.username)

        except Exception, e:
            self.log(e)

    def fail(self, message="Authentication denied"):
        #TODO

    def reset(self):

        self.username = None
        self.password = None
        # pseudo-code...
        view.reset()

    def show_prompt(self, greeter, text, prompt):
        if prompt == LightDM.PromptType.SECRET:
            pass

        else:
            pass

    def show_message(self, greeter, text, type):
        #TODO

    def authentication_complete(self, greeter):
        self.log("Completed authentication.")
        if self.greeter.get_is_authenticated():
            session = self.read_configured_session()
            if self.greeter.start_session_sync(session):
                self.reset()
            else:
                self.fail("Failed to start session")
        else:
            self.fail("Authentication failed, check your username/password")

    def read_configured_session(self):
        try:
            f = open("/usr/share/userGreeterDefaults")
            greeters = f.read()
            f.close()
            match = re.search(r'^%s=(.*)'%self.username, greeters, re.MULTILINE)
            if not match == None:
                session = match.group(1)
                self.log("Launching user session %s" % session)
            else:
                f = open("/etc/lightdm/lightdm.conf", 'r')
                lightdm_conf = f.read()
                f.close()
                match = re.search(r'^user-session=(.*)', lightdm_conf, re.MULTILINE)
                session = match.group(1)
            return session
        except Exception, e:
            self.log(e)
            return "cinnamon"


    def log(self, text):
        # I don't know if ldm has a good logging mechanism (?) for access attempts, I know kerberos does...otherwise this might be a good spot to put some logging. Eventually.

        print >> sys.stderr, text

if __name__ == '__main__':
    Greeter()
    Gtk.main()
