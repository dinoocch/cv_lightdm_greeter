/* toggle-box.c generated by valac 0.26.2, the Vala compiler
 * generated from toggle-box.vala, do not modify */

/* -*- Mode: Vala; indent-tabs-mode: nil; tab-width: 4 -*-
 *
 * Copyright (C) 2012 Canonical Ltd
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authors: Michael Terry <michael.terry@canonical.com>
 */

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <cairo.h>
#include <float.h>
#include <math.h>
#include <glib/gi18n-lib.h>


#define TYPE_TOGGLE_BOX (toggle_box_get_type ())
#define TOGGLE_BOX(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TOGGLE_BOX, ToggleBox))
#define TOGGLE_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_TOGGLE_BOX, ToggleBoxClass))
#define IS_TOGGLE_BOX(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TOGGLE_BOX))
#define IS_TOGGLE_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_TOGGLE_BOX))
#define TOGGLE_BOX_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_TOGGLE_BOX, ToggleBoxClass))

typedef struct _ToggleBox ToggleBox;
typedef struct _ToggleBoxClass ToggleBoxClass;
typedef struct _ToggleBoxPrivate ToggleBoxPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_list_free0(var) ((var == NULL) ? NULL : (var = (g_list_free (var), NULL)))

#define TYPE_FLAT_BUTTON (flat_button_get_type ())
#define FLAT_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_FLAT_BUTTON, FlatButton))
#define FLAT_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_FLAT_BUTTON, FlatButtonClass))
#define IS_FLAT_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_FLAT_BUTTON))
#define IS_FLAT_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_FLAT_BUTTON))
#define FLAT_BUTTON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_FLAT_BUTTON, FlatButtonClass))

typedef struct _FlatButton FlatButton;
typedef struct _FlatButtonClass FlatButtonClass;

#define TYPE_CACHED_IMAGE (cached_image_get_type ())
#define CACHED_IMAGE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_CACHED_IMAGE, CachedImage))
#define CACHED_IMAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_CACHED_IMAGE, CachedImageClass))
#define IS_CACHED_IMAGE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_CACHED_IMAGE))
#define IS_CACHED_IMAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_CACHED_IMAGE))
#define CACHED_IMAGE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_CACHED_IMAGE, CachedImageClass))

typedef struct _CachedImage CachedImage;
typedef struct _CachedImageClass CachedImageClass;
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

struct _ToggleBox {
	GtkBox parent_instance;
	ToggleBoxPrivate * priv;
};

struct _ToggleBoxClass {
	GtkBoxClass parent_class;
};

struct _ToggleBoxPrivate {
	gchar* _default_key;
	gchar* _starting_key;
	gchar* _selected_key;
	GtkButton* selected_button;
};


static gpointer toggle_box_parent_class = NULL;

GType toggle_box_get_type (void) G_GNUC_CONST;
#define TOGGLE_BOX_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_TOGGLE_BOX, ToggleBoxPrivate))
enum  {
	TOGGLE_BOX_DUMMY_PROPERTY,
	TOGGLE_BOX_DEFAULT_KEY,
	TOGGLE_BOX_STARTING_KEY,
	TOGGLE_BOX_SELECTED_KEY
};
ToggleBox* toggle_box_new (const gchar* default_key, const gchar* starting_key);
ToggleBox* toggle_box_construct (GType object_type, const gchar* default_key, const gchar* starting_key);
void toggle_box_add_item (ToggleBox* self, const gchar* key, const gchar* label, GdkPixbuf* icon);
static GtkButton* toggle_box_make_button (ToggleBox* self, const gchar* key, const gchar* name_in, GdkPixbuf* icon);
const gchar* toggle_box_get_starting_key (ToggleBox* self);
const gchar* toggle_box_get_default_key (ToggleBox* self);
static void toggle_box_select (ToggleBox* self, GtkButton* button);
static gboolean toggle_box_real_draw (GtkWidget* base, cairo_t* c);
void cairo_utils_rounded_rectangle (cairo_t* c, gdouble x, gdouble y, gdouble width, gdouble height, gdouble radius);
#define grid_size 40
void toggle_box_set_selected_key (ToggleBox* self, const gchar* value);
GType flat_button_get_type (void) G_GNUC_CONST;
FlatButton* flat_button_new (void);
FlatButton* flat_button_construct (GType object_type);
static void toggle_box_button_clicked_cb (ToggleBox* self, GtkButton* button);
static void _toggle_box_button_clicked_cb_gtk_button_clicked (GtkButton* _sender, gpointer self);
GType cached_image_get_type (void) G_GNUC_CONST;
CachedImage* cached_image_new (GdkPixbuf* pixbuf);
CachedImage* cached_image_construct (GType object_type, GdkPixbuf* pixbuf);
static void toggle_box_real_grab_focus (GtkWidget* base);
static void toggle_box_set_default_key (ToggleBox* self, const gchar* value);
static void toggle_box_set_starting_key (ToggleBox* self, const gchar* value);
const gchar* toggle_box_get_selected_key (ToggleBox* self);
static GObject * toggle_box_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
static void toggle_box_finalize (GObject* obj);
static void _vala_toggle_box_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_toggle_box_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


ToggleBox* toggle_box_construct (GType object_type, const gchar* default_key, const gchar* starting_key) {
	ToggleBox * self = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	_tmp0_ = default_key;
	_tmp1_ = starting_key;
	_tmp2_ = starting_key;
	self = (ToggleBox*) g_object_new (object_type, "default-key", _tmp0_, "starting-key", _tmp1_, "selected-key", _tmp2_, NULL);
	return self;
}


ToggleBox* toggle_box_new (const gchar* default_key, const gchar* starting_key) {
	return toggle_box_construct (TYPE_TOGGLE_BOX, default_key, starting_key);
}


void toggle_box_add_item (ToggleBox* self, const gchar* key, const gchar* label, GdkPixbuf* icon) {
	GtkButton* item = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	GdkPixbuf* _tmp2_ = NULL;
	GtkButton* _tmp3_ = NULL;
	gboolean _tmp4_ = FALSE;
	gboolean _tmp5_ = FALSE;
	GList* _tmp6_ = NULL;
	GList* _tmp7_ = NULL;
	gboolean _tmp8_ = FALSE;
	GtkButton* _tmp16_ = NULL;
	GtkButton* _tmp17_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (key != NULL);
	g_return_if_fail (label != NULL);
	_tmp0_ = key;
	_tmp1_ = label;
	_tmp2_ = icon;
	_tmp3_ = toggle_box_make_button (self, _tmp0_, _tmp1_, _tmp2_);
	item = _tmp3_;
	_tmp6_ = gtk_container_get_children ((GtkContainer*) self);
	_tmp7_ = _tmp6_;
	_tmp8_ = _tmp7_ == NULL;
	_g_list_free0 (_tmp7_);
	if (_tmp8_) {
		_tmp5_ = TRUE;
	} else {
		gboolean _tmp9_ = FALSE;
		const gchar* _tmp10_ = NULL;
		_tmp10_ = self->priv->_starting_key;
		if (_tmp10_ == NULL) {
			const gchar* _tmp11_ = NULL;
			const gchar* _tmp12_ = NULL;
			_tmp11_ = self->priv->_default_key;
			_tmp12_ = key;
			_tmp9_ = g_strcmp0 (_tmp11_, _tmp12_) == 0;
		} else {
			_tmp9_ = FALSE;
		}
		_tmp5_ = _tmp9_;
	}
	if (_tmp5_) {
		_tmp4_ = TRUE;
	} else {
		const gchar* _tmp13_ = NULL;
		const gchar* _tmp14_ = NULL;
		_tmp13_ = self->priv->_starting_key;
		_tmp14_ = key;
		_tmp4_ = g_strcmp0 (_tmp13_, _tmp14_) == 0;
	}
	if (_tmp4_) {
		GtkButton* _tmp15_ = NULL;
		_tmp15_ = item;
		toggle_box_select (self, _tmp15_);
	}
	_tmp16_ = item;
	gtk_widget_show ((GtkWidget*) _tmp16_);
	_tmp17_ = item;
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp17_);
	_g_object_unref0 (item);
}


static gboolean toggle_box_real_draw (GtkWidget* base, cairo_t* c) {
	ToggleBox * self;
	gboolean result = FALSE;
	GtkAllocation allocation = {0};
	GtkAllocation _tmp0_ = {0};
	cairo_t* _tmp1_ = NULL;
	GtkAllocation _tmp2_ = {0};
	gint _tmp3_ = 0;
	GtkAllocation _tmp4_ = {0};
	gint _tmp5_ = 0;
	cairo_t* _tmp6_ = NULL;
	cairo_t* _tmp7_ = NULL;
	cairo_t* _tmp8_ = NULL;
	cairo_t* _tmp9_ = NULL;
	gboolean _tmp10_ = FALSE;
	self = (ToggleBox*) base;
	g_return_val_if_fail (c != NULL, FALSE);
	gtk_widget_get_allocation ((GtkWidget*) self, &_tmp0_);
	allocation = _tmp0_;
	_tmp1_ = c;
	_tmp2_ = allocation;
	_tmp3_ = _tmp2_.width;
	_tmp4_ = allocation;
	_tmp5_ = _tmp4_.height;
	cairo_utils_rounded_rectangle (_tmp1_, (gdouble) 0, (gdouble) 0, (gdouble) _tmp3_, (gdouble) _tmp5_, 0.1 * grid_size);
	_tmp6_ = c;
	cairo_set_source_rgba (_tmp6_, 0.5, 0.5, 0.5, 0.5);
	_tmp7_ = c;
	cairo_set_line_width (_tmp7_, (gdouble) 1);
	_tmp8_ = c;
	cairo_stroke (_tmp8_);
	_tmp9_ = c;
	_tmp10_ = GTK_WIDGET_CLASS (toggle_box_parent_class)->draw ((GtkWidget*) G_TYPE_CHECK_INSTANCE_CAST (self, gtk_box_get_type (), GtkBox), _tmp9_);
	result = _tmp10_;
	return result;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void toggle_box_select (ToggleBox* self, GtkButton* button) {
	GtkButton* _tmp0_ = NULL;
	GtkButton* _tmp2_ = NULL;
	GtkButton* _tmp3_ = NULL;
	GtkButton* _tmp4_ = NULL;
	GtkButton* _tmp5_ = NULL;
	gconstpointer _tmp6_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (button != NULL);
	_tmp0_ = self->priv->selected_button;
	if (_tmp0_ != NULL) {
		GtkButton* _tmp1_ = NULL;
		_tmp1_ = self->priv->selected_button;
		gtk_button_set_relief (_tmp1_, GTK_RELIEF_NONE);
	}
	_tmp2_ = button;
	_tmp3_ = _g_object_ref0 (_tmp2_);
	_g_object_unref0 (self->priv->selected_button);
	self->priv->selected_button = _tmp3_;
	_tmp4_ = self->priv->selected_button;
	gtk_button_set_relief (_tmp4_, GTK_RELIEF_NORMAL);
	_tmp5_ = self->priv->selected_button;
	_tmp6_ = g_object_get_data ((GObject*) _tmp5_, "toggle-list-key");
	toggle_box_set_selected_key (self, (const gchar*) _tmp6_);
}


static void _toggle_box_button_clicked_cb_gtk_button_clicked (GtkButton* _sender, gpointer self) {
	toggle_box_button_clicked_cb ((ToggleBox*) self, _sender);
}


static GtkButton* toggle_box_make_button (ToggleBox* self, const gchar* key, const gchar* name_in, GdkPixbuf* icon) {
	GtkButton* result = NULL;
	FlatButton* item = NULL;
	FlatButton* _tmp0_ = NULL;
	FlatButton* _tmp1_ = NULL;
	FlatButton* _tmp2_ = NULL;
	GtkBox* hbox = NULL;
	GtkBox* _tmp3_ = NULL;
	GdkPixbuf* _tmp4_ = NULL;
	gchar* name = NULL;
	const gchar* _tmp9_ = NULL;
	gchar* _tmp10_ = NULL;
	const gchar* _tmp11_ = NULL;
	const gchar* _tmp12_ = NULL;
	GtkLabel* label = NULL;
	GtkLabel* _tmp16_ = NULL;
	const gchar* _tmp17_ = NULL;
	gchar* _tmp18_ = NULL;
	gchar* _tmp19_ = NULL;
	GtkBox* _tmp20_ = NULL;
	FlatButton* _tmp21_ = NULL;
	FlatButton* _tmp22_ = NULL;
	GtkBox* _tmp23_ = NULL;
	GtkBox* _tmp24_ = NULL;
	FlatButton* _tmp30_ = NULL;
	const gchar* _tmp31_ = NULL;
	gchar* _tmp32_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (key != NULL, NULL);
	g_return_val_if_fail (name_in != NULL, NULL);
	_tmp0_ = flat_button_new ();
	g_object_ref_sink (_tmp0_);
	item = _tmp0_;
	_tmp1_ = item;
	gtk_button_set_relief ((GtkButton*) _tmp1_, GTK_RELIEF_NONE);
	_tmp2_ = item;
	g_signal_connect_object ((GtkButton*) _tmp2_, "clicked", (GCallback) _toggle_box_button_clicked_cb_gtk_button_clicked, self, 0);
	_tmp3_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 6);
	g_object_ref_sink (_tmp3_);
	hbox = _tmp3_;
	_tmp4_ = icon;
	if (_tmp4_ != NULL) {
		CachedImage* image = NULL;
		GdkPixbuf* _tmp5_ = NULL;
		CachedImage* _tmp6_ = NULL;
		GtkBox* _tmp7_ = NULL;
		CachedImage* _tmp8_ = NULL;
		_tmp5_ = icon;
		_tmp6_ = cached_image_new (_tmp5_);
		g_object_ref_sink (_tmp6_);
		image = _tmp6_;
		_tmp7_ = hbox;
		_tmp8_ = image;
		gtk_box_pack_start (_tmp7_, (GtkWidget*) _tmp8_, FALSE, FALSE, (guint) 0);
		_g_object_unref0 (image);
	}
	_tmp9_ = name_in;
	_tmp10_ = g_strdup (_tmp9_);
	name = _tmp10_;
	_tmp11_ = key;
	_tmp12_ = self->priv->_default_key;
	if (g_strcmp0 (_tmp11_, _tmp12_) == 0) {
		const gchar* _tmp13_ = NULL;
		const gchar* _tmp14_ = NULL;
		gchar* _tmp15_ = NULL;
		_tmp13_ = _ ("%s (Default)");
		_tmp14_ = name;
		_tmp15_ = g_strdup_printf (_tmp13_, _tmp14_);
		_g_free0 (name);
		name = _tmp15_;
	}
	_tmp16_ = (GtkLabel*) gtk_label_new (NULL);
	g_object_ref_sink (_tmp16_);
	label = _tmp16_;
	_tmp17_ = name;
	_tmp18_ = g_strdup_printf ("<span font=\"Ubuntu 13\">%s</span>", _tmp17_);
	_tmp19_ = _tmp18_;
	gtk_label_set_markup (label, _tmp19_);
	_g_free0 (_tmp19_);
	gtk_widget_set_halign ((GtkWidget*) label, GTK_ALIGN_START);
	_tmp20_ = hbox;
	gtk_box_pack_start (_tmp20_, (GtkWidget*) label, TRUE, TRUE, (guint) 0);
	_tmp21_ = item;
	gtk_widget_set_hexpand ((GtkWidget*) _tmp21_, TRUE);
	_tmp22_ = item;
	_tmp23_ = hbox;
	gtk_container_add ((GtkContainer*) _tmp22_, (GtkWidget*) _tmp23_);
	_tmp24_ = hbox;
	gtk_widget_show_all ((GtkWidget*) _tmp24_);
	{
		GtkCssProvider* style = NULL;
		GtkCssProvider* _tmp25_ = NULL;
		FlatButton* _tmp26_ = NULL;
		GtkStyleContext* _tmp27_ = NULL;
		_tmp25_ = gtk_css_provider_new ();
		style = _tmp25_;
		gtk_css_provider_load_from_data (style, "* {padding: 8px;}", (gssize) (-1), &_inner_error_);
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			_g_object_unref0 (style);
			goto __catch31_g_error;
		}
		_tmp26_ = item;
		_tmp27_ = gtk_widget_get_style_context ((GtkWidget*) _tmp26_);
		gtk_style_context_add_provider (_tmp27_, (GtkStyleProvider*) style, (guint) GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
		_g_object_unref0 (style);
	}
	goto __finally31;
	__catch31_g_error:
	{
		GError* e = NULL;
		GError* _tmp28_ = NULL;
		const gchar* _tmp29_ = NULL;
		e = _inner_error_;
		_inner_error_ = NULL;
		_tmp28_ = e;
		_tmp29_ = _tmp28_->message;
		g_debug ("toggle-box.vala:114: Internal error loading session chooser style: %s", _tmp29_);
		_g_error_free0 (e);
	}
	__finally31:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		_g_object_unref0 (label);
		_g_free0 (name);
		_g_object_unref0 (hbox);
		_g_object_unref0 (item);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
	_tmp30_ = item;
	_tmp31_ = key;
	_tmp32_ = g_strdup (_tmp31_);
	g_object_set_data_full ((GObject*) _tmp30_, "toggle-list-key", _tmp32_, g_free);
	result = (GtkButton*) item;
	_g_object_unref0 (label);
	_g_free0 (name);
	_g_object_unref0 (hbox);
	return result;
}


static void toggle_box_button_clicked_cb (ToggleBox* self, GtkButton* button) {
	GtkButton* _tmp0_ = NULL;
	gconstpointer _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (button != NULL);
	_tmp0_ = button;
	_tmp1_ = g_object_get_data ((GObject*) _tmp0_, "toggle-list-key");
	toggle_box_set_selected_key (self, (const gchar*) _tmp1_);
}


static void toggle_box_real_grab_focus (GtkWidget* base) {
	ToggleBox * self;
	GtkButton* _tmp0_ = NULL;
	self = (ToggleBox*) base;
	_tmp0_ = self->priv->selected_button;
	if (_tmp0_ != NULL) {
		GtkButton* _tmp1_ = NULL;
		_tmp1_ = self->priv->selected_button;
		gtk_widget_grab_focus ((GtkWidget*) _tmp1_);
	}
}


const gchar* toggle_box_get_default_key (ToggleBox* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_default_key;
	result = _tmp0_;
	return result;
}


static void toggle_box_set_default_key (ToggleBox* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_default_key);
	self->priv->_default_key = _tmp1_;
	g_object_notify ((GObject *) self, "default-key");
}


const gchar* toggle_box_get_starting_key (ToggleBox* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_starting_key;
	result = _tmp0_;
	return result;
}


static void toggle_box_set_starting_key (ToggleBox* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_starting_key);
	self->priv->_starting_key = _tmp1_;
	g_object_notify ((GObject *) self, "starting-key");
}


const gchar* toggle_box_get_selected_key (ToggleBox* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_selected_key;
	result = _tmp0_;
	return result;
}


void toggle_box_set_selected_key (ToggleBox* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_selected_key);
	self->priv->_selected_key = _tmp1_;
	g_object_notify ((GObject *) self, "selected-key");
}


static GObject * toggle_box_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	ToggleBox * self;
	parent_class = G_OBJECT_CLASS (toggle_box_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_TOGGLE_BOX, ToggleBox);
	gtk_orientable_set_orientation ((GtkOrientable*) self, GTK_ORIENTATION_VERTICAL);
	return obj;
}


static void toggle_box_class_init (ToggleBoxClass * klass) {
	toggle_box_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (ToggleBoxPrivate));
	((GtkWidgetClass *) klass)->draw = toggle_box_real_draw;
	((GtkWidgetClass *) klass)->grab_focus = toggle_box_real_grab_focus;
	G_OBJECT_CLASS (klass)->get_property = _vala_toggle_box_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_toggle_box_set_property;
	G_OBJECT_CLASS (klass)->constructor = toggle_box_constructor;
	G_OBJECT_CLASS (klass)->finalize = toggle_box_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), TOGGLE_BOX_DEFAULT_KEY, g_param_spec_string ("default-key", "default-key", "default-key", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), TOGGLE_BOX_STARTING_KEY, g_param_spec_string ("starting-key", "starting-key", "starting-key", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), TOGGLE_BOX_SELECTED_KEY, g_param_spec_string ("selected-key", "selected-key", "selected-key", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void toggle_box_instance_init (ToggleBox * self) {
	self->priv = TOGGLE_BOX_GET_PRIVATE (self);
}


static void toggle_box_finalize (GObject* obj) {
	ToggleBox * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_TOGGLE_BOX, ToggleBox);
	_g_free0 (self->priv->_default_key);
	_g_free0 (self->priv->_starting_key);
	_g_free0 (self->priv->_selected_key);
	_g_object_unref0 (self->priv->selected_button);
	G_OBJECT_CLASS (toggle_box_parent_class)->finalize (obj);
}


GType toggle_box_get_type (void) {
	static volatile gsize toggle_box_type_id__volatile = 0;
	if (g_once_init_enter (&toggle_box_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ToggleBoxClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) toggle_box_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ToggleBox), 0, (GInstanceInitFunc) toggle_box_instance_init, NULL };
		GType toggle_box_type_id;
		toggle_box_type_id = g_type_register_static (gtk_box_get_type (), "ToggleBox", &g_define_type_info, 0);
		g_once_init_leave (&toggle_box_type_id__volatile, toggle_box_type_id);
	}
	return toggle_box_type_id__volatile;
}


static void _vala_toggle_box_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	ToggleBox * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_TOGGLE_BOX, ToggleBox);
	switch (property_id) {
		case TOGGLE_BOX_DEFAULT_KEY:
		g_value_set_string (value, toggle_box_get_default_key (self));
		break;
		case TOGGLE_BOX_STARTING_KEY:
		g_value_set_string (value, toggle_box_get_starting_key (self));
		break;
		case TOGGLE_BOX_SELECTED_KEY:
		g_value_set_string (value, toggle_box_get_selected_key (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_toggle_box_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	ToggleBox * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_TOGGLE_BOX, ToggleBox);
	switch (property_id) {
		case TOGGLE_BOX_DEFAULT_KEY:
		toggle_box_set_default_key (self, g_value_get_string (value));
		break;
		case TOGGLE_BOX_STARTING_KEY:
		toggle_box_set_starting_key (self, g_value_get_string (value));
		break;
		case TOGGLE_BOX_SELECTED_KEY:
		toggle_box_set_selected_key (self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



