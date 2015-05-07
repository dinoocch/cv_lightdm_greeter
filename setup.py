from distutils.core import setup
import os, glob
def read(fname):
    return open(os.path.join(os.path.dirname(__file__), fname)).read()

setup(name="cv_lightdm_greeter",version='0.0.0',maintainer="dinoocch",maintainer_email="dbo130030@utdallas.edu",license="GPL-2",description="LightDM Webkit Greeter written for Collegium V computers",long_description=read('README.md'),packages=["cv_lightdm_greeter"],package_dir={'':"src"},data_files=[('share/xgreeters',['data/cv-greeter.desktop']),('share/cv_lightdm_greeter', glob.glob('assets/*.*')),],)
