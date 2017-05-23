/* settings.c generated by valac 0.34.8, the Vala compiler
 * generated from settings.vala, do not modify */

/* Copyright 2017 Siddhartha Das (bablu.boy@gmail.com)
*
* This file is part of Bookworm and is used for persisting
* the state of the window and associated user prefferences
*
* Bookworm is free software: you can redistribute it
* and/or modify it under the terms of the GNU General Public License as
* published by the Free Software Foundation, either version 3 of the
* License, or (at your option) any later version.
*
* Bookworm is distributed in the hope that it will be
* useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
* Public License for more details.
*
* You should have received a copy of the GNU General Public License along
* with Bookworm. If not, see http://www.gnu.org/licenses/.
*/

#include <glib.h>
#include <glib-object.h>
#include <granite.h>
#include <float.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


#define BOOKWORM_APP_TYPE_SETTINGS (bookworm_app_settings_get_type ())
#define BOOKWORM_APP_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BOOKWORM_APP_TYPE_SETTINGS, BookwormAppSettings))
#define BOOKWORM_APP_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BOOKWORM_APP_TYPE_SETTINGS, BookwormAppSettingsClass))
#define BOOKWORM_APP_IS_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BOOKWORM_APP_TYPE_SETTINGS))
#define BOOKWORM_APP_IS_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BOOKWORM_APP_TYPE_SETTINGS))
#define BOOKWORM_APP_SETTINGS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BOOKWORM_APP_TYPE_SETTINGS, BookwormAppSettingsClass))

typedef struct _BookwormAppSettings BookwormAppSettings;
typedef struct _BookwormAppSettingsClass BookwormAppSettingsClass;
typedef struct _BookwormAppSettingsPrivate BookwormAppSettingsPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _BookwormAppSettings {
	GraniteServicesSettings parent_instance;
	BookwormAppSettingsPrivate * priv;
};

struct _BookwormAppSettingsClass {
	GraniteServicesSettingsClass parent_class;
};

struct _BookwormAppSettingsPrivate {
	gint _window_width;
	gint _window_height;
	gint _pos_x;
	gint _pos_y;
	gboolean _window_is_maximized;
	gdouble _zoom_level;
	gchar* _reading_profile;
	gboolean _is_local_storage_enabled;
	gchar* _reading_width;
	gchar* _reading_line_height;
	gchar* _library_view_mode;
};


static gpointer bookworm_app_settings_parent_class = NULL;
static BookwormAppSettings* bookworm_app_settings_instance;
static BookwormAppSettings* bookworm_app_settings_instance = NULL;

GType bookworm_app_settings_get_type (void) G_GNUC_CONST;
#define BOOKWORM_APP_SETTINGS_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), BOOKWORM_APP_TYPE_SETTINGS, BookwormAppSettingsPrivate))
enum  {
	BOOKWORM_APP_SETTINGS_DUMMY_PROPERTY,
	BOOKWORM_APP_SETTINGS_WINDOW_WIDTH,
	BOOKWORM_APP_SETTINGS_WINDOW_HEIGHT,
	BOOKWORM_APP_SETTINGS_POS_X,
	BOOKWORM_APP_SETTINGS_POS_Y,
	BOOKWORM_APP_SETTINGS_WINDOW_IS_MAXIMIZED,
	BOOKWORM_APP_SETTINGS_ZOOM_LEVEL,
	BOOKWORM_APP_SETTINGS_READING_PROFILE,
	BOOKWORM_APP_SETTINGS_IS_LOCAL_STORAGE_ENABLED,
	BOOKWORM_APP_SETTINGS_READING_WIDTH,
	BOOKWORM_APP_SETTINGS_READING_LINE_HEIGHT,
	BOOKWORM_APP_SETTINGS_LIBRARY_VIEW_MODE
};
BookwormAppSettings* bookworm_app_settings_get_instance (void);
static BookwormAppSettings* bookworm_app_settings_new (void);
static BookwormAppSettings* bookworm_app_settings_construct (GType object_type);
#define BOOKWORM_APP_CONSTANTS_bookworm_id "com.github.babluboy.bookworm"
gint bookworm_app_settings_get_window_width (BookwormAppSettings* self);
void bookworm_app_settings_set_window_width (BookwormAppSettings* self, gint value);
gint bookworm_app_settings_get_window_height (BookwormAppSettings* self);
void bookworm_app_settings_set_window_height (BookwormAppSettings* self, gint value);
gint bookworm_app_settings_get_pos_x (BookwormAppSettings* self);
void bookworm_app_settings_set_pos_x (BookwormAppSettings* self, gint value);
gint bookworm_app_settings_get_pos_y (BookwormAppSettings* self);
void bookworm_app_settings_set_pos_y (BookwormAppSettings* self, gint value);
gboolean bookworm_app_settings_get_window_is_maximized (BookwormAppSettings* self);
void bookworm_app_settings_set_window_is_maximized (BookwormAppSettings* self, gboolean value);
gdouble bookworm_app_settings_get_zoom_level (BookwormAppSettings* self);
void bookworm_app_settings_set_zoom_level (BookwormAppSettings* self, gdouble value);
const gchar* bookworm_app_settings_get_reading_profile (BookwormAppSettings* self);
void bookworm_app_settings_set_reading_profile (BookwormAppSettings* self, const gchar* value);
gboolean bookworm_app_settings_get_is_local_storage_enabled (BookwormAppSettings* self);
void bookworm_app_settings_set_is_local_storage_enabled (BookwormAppSettings* self, gboolean value);
const gchar* bookworm_app_settings_get_reading_width (BookwormAppSettings* self);
void bookworm_app_settings_set_reading_width (BookwormAppSettings* self, const gchar* value);
const gchar* bookworm_app_settings_get_reading_line_height (BookwormAppSettings* self);
void bookworm_app_settings_set_reading_line_height (BookwormAppSettings* self, const gchar* value);
const gchar* bookworm_app_settings_get_library_view_mode (BookwormAppSettings* self);
void bookworm_app_settings_set_library_view_mode (BookwormAppSettings* self, const gchar* value);
static void bookworm_app_settings_finalize (GObject* obj);
static void _vala_bookworm_app_settings_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_bookworm_app_settings_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


static gpointer _g_object_ref0 (gpointer self) {
#line 39 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	return self ? g_object_ref (self) : NULL;
#line 124 "settings.c"
}


BookwormAppSettings* bookworm_app_settings_get_instance (void) {
	BookwormAppSettings* result = NULL;
	BookwormAppSettings* _tmp0_ = NULL;
	BookwormAppSettings* _tmp2_ = NULL;
	BookwormAppSettings* _tmp3_ = NULL;
#line 36 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp0_ = bookworm_app_settings_instance;
#line 36 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	if (_tmp0_ == NULL) {
#line 137 "settings.c"
		BookwormAppSettings* _tmp1_ = NULL;
#line 37 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		_tmp1_ = bookworm_app_settings_new ();
#line 37 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		_g_object_unref0 (bookworm_app_settings_instance);
#line 37 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		bookworm_app_settings_instance = _tmp1_;
#line 145 "settings.c"
	}
#line 39 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp2_ = bookworm_app_settings_instance;
#line 39 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp3_ = _g_object_ref0 (_tmp2_);
#line 39 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	result = _tmp3_;
#line 39 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	return result;
#line 155 "settings.c"
}


static BookwormAppSettings* bookworm_app_settings_construct (GType object_type) {
	BookwormAppSettings * self = NULL;
#line 43 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	self = (BookwormAppSettings*) granite_services_settings_construct (object_type, BOOKWORM_APP_CONSTANTS_bookworm_id);
#line 42 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	return self;
#line 165 "settings.c"
}


static BookwormAppSettings* bookworm_app_settings_new (void) {
#line 42 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	return bookworm_app_settings_construct (BOOKWORM_APP_TYPE_SETTINGS);
#line 172 "settings.c"
}


gint bookworm_app_settings_get_window_width (BookwormAppSettings* self) {
	gint result;
	gint _tmp0_ = 0;
#line 23 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 23 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp0_ = self->priv->_window_width;
#line 23 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	result = _tmp0_;
#line 23 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	return result;
#line 187 "settings.c"
}


void bookworm_app_settings_set_window_width (BookwormAppSettings* self, gint value) {
	gint _tmp0_ = 0;
#line 23 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_return_if_fail (self != NULL);
#line 23 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp0_ = value;
#line 23 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	self->priv->_window_width = _tmp0_;
#line 23 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_object_notify ((GObject *) self, "window-width");
#line 201 "settings.c"
}


gint bookworm_app_settings_get_window_height (BookwormAppSettings* self) {
	gint result;
	gint _tmp0_ = 0;
#line 24 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 24 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp0_ = self->priv->_window_height;
#line 24 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	result = _tmp0_;
#line 24 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	return result;
#line 216 "settings.c"
}


void bookworm_app_settings_set_window_height (BookwormAppSettings* self, gint value) {
	gint _tmp0_ = 0;
#line 24 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_return_if_fail (self != NULL);
#line 24 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp0_ = value;
#line 24 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	self->priv->_window_height = _tmp0_;
#line 24 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_object_notify ((GObject *) self, "window-height");
#line 230 "settings.c"
}


gint bookworm_app_settings_get_pos_x (BookwormAppSettings* self) {
	gint result;
	gint _tmp0_ = 0;
#line 25 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 25 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp0_ = self->priv->_pos_x;
#line 25 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	result = _tmp0_;
#line 25 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	return result;
#line 245 "settings.c"
}


void bookworm_app_settings_set_pos_x (BookwormAppSettings* self, gint value) {
	gint _tmp0_ = 0;
#line 25 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_return_if_fail (self != NULL);
#line 25 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp0_ = value;
#line 25 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	self->priv->_pos_x = _tmp0_;
#line 25 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_object_notify ((GObject *) self, "pos-x");
#line 259 "settings.c"
}


gint bookworm_app_settings_get_pos_y (BookwormAppSettings* self) {
	gint result;
	gint _tmp0_ = 0;
#line 26 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 26 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp0_ = self->priv->_pos_y;
#line 26 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	result = _tmp0_;
#line 26 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	return result;
#line 274 "settings.c"
}


void bookworm_app_settings_set_pos_y (BookwormAppSettings* self, gint value) {
	gint _tmp0_ = 0;
#line 26 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_return_if_fail (self != NULL);
#line 26 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp0_ = value;
#line 26 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	self->priv->_pos_y = _tmp0_;
#line 26 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_object_notify ((GObject *) self, "pos-y");
#line 288 "settings.c"
}


gboolean bookworm_app_settings_get_window_is_maximized (BookwormAppSettings* self) {
	gboolean result;
	gboolean _tmp0_ = FALSE;
#line 27 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 27 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp0_ = self->priv->_window_is_maximized;
#line 27 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	result = _tmp0_;
#line 27 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	return result;
#line 303 "settings.c"
}


void bookworm_app_settings_set_window_is_maximized (BookwormAppSettings* self, gboolean value) {
	gboolean _tmp0_ = FALSE;
#line 27 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_return_if_fail (self != NULL);
#line 27 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp0_ = value;
#line 27 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	self->priv->_window_is_maximized = _tmp0_;
#line 27 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_object_notify ((GObject *) self, "window-is-maximized");
#line 317 "settings.c"
}


gdouble bookworm_app_settings_get_zoom_level (BookwormAppSettings* self) {
	gdouble result;
	gdouble _tmp0_ = 0.0;
#line 28 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_return_val_if_fail (self != NULL, 0.0);
#line 28 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp0_ = self->priv->_zoom_level;
#line 28 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	result = _tmp0_;
#line 28 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	return result;
#line 332 "settings.c"
}


void bookworm_app_settings_set_zoom_level (BookwormAppSettings* self, gdouble value) {
	gdouble _tmp0_ = 0.0;
#line 28 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_return_if_fail (self != NULL);
#line 28 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp0_ = value;
#line 28 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	self->priv->_zoom_level = _tmp0_;
#line 28 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_object_notify ((GObject *) self, "zoom-level");
#line 346 "settings.c"
}


const gchar* bookworm_app_settings_get_reading_profile (BookwormAppSettings* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
#line 29 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 29 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp0_ = self->priv->_reading_profile;
#line 29 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	result = _tmp0_;
#line 29 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	return result;
#line 361 "settings.c"
}


void bookworm_app_settings_set_reading_profile (BookwormAppSettings* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
#line 29 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_return_if_fail (self != NULL);
#line 29 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp0_ = value;
#line 29 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 29 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_g_free0 (self->priv->_reading_profile);
#line 29 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	self->priv->_reading_profile = _tmp1_;
#line 29 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_object_notify ((GObject *) self, "reading-profile");
#line 380 "settings.c"
}


gboolean bookworm_app_settings_get_is_local_storage_enabled (BookwormAppSettings* self) {
	gboolean result;
	gboolean _tmp0_ = FALSE;
#line 30 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 30 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp0_ = self->priv->_is_local_storage_enabled;
#line 30 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	result = _tmp0_;
#line 30 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	return result;
#line 395 "settings.c"
}


void bookworm_app_settings_set_is_local_storage_enabled (BookwormAppSettings* self, gboolean value) {
	gboolean _tmp0_ = FALSE;
#line 30 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_return_if_fail (self != NULL);
#line 30 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp0_ = value;
#line 30 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	self->priv->_is_local_storage_enabled = _tmp0_;
#line 30 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_object_notify ((GObject *) self, "is-local-storage-enabled");
#line 409 "settings.c"
}


const gchar* bookworm_app_settings_get_reading_width (BookwormAppSettings* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
#line 31 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 31 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp0_ = self->priv->_reading_width;
#line 31 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	result = _tmp0_;
#line 31 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	return result;
#line 424 "settings.c"
}


void bookworm_app_settings_set_reading_width (BookwormAppSettings* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
#line 31 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_return_if_fail (self != NULL);
#line 31 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp0_ = value;
#line 31 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 31 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_g_free0 (self->priv->_reading_width);
#line 31 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	self->priv->_reading_width = _tmp1_;
#line 31 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_object_notify ((GObject *) self, "reading-width");
#line 443 "settings.c"
}


const gchar* bookworm_app_settings_get_reading_line_height (BookwormAppSettings* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
#line 32 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 32 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp0_ = self->priv->_reading_line_height;
#line 32 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	result = _tmp0_;
#line 32 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	return result;
#line 458 "settings.c"
}


void bookworm_app_settings_set_reading_line_height (BookwormAppSettings* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
#line 32 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_return_if_fail (self != NULL);
#line 32 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp0_ = value;
#line 32 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 32 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_g_free0 (self->priv->_reading_line_height);
#line 32 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	self->priv->_reading_line_height = _tmp1_;
#line 32 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_object_notify ((GObject *) self, "reading-line-height");
#line 477 "settings.c"
}


const gchar* bookworm_app_settings_get_library_view_mode (BookwormAppSettings* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
#line 33 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 33 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp0_ = self->priv->_library_view_mode;
#line 33 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	result = _tmp0_;
#line 33 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	return result;
#line 492 "settings.c"
}


void bookworm_app_settings_set_library_view_mode (BookwormAppSettings* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
#line 33 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_return_if_fail (self != NULL);
#line 33 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp0_ = value;
#line 33 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 33 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_g_free0 (self->priv->_library_view_mode);
#line 33 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	self->priv->_library_view_mode = _tmp1_;
#line 33 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_object_notify ((GObject *) self, "library-view-mode");
#line 511 "settings.c"
}


static void bookworm_app_settings_class_init (BookwormAppSettingsClass * klass) {
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	bookworm_app_settings_parent_class = g_type_class_peek_parent (klass);
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_type_class_add_private (klass, sizeof (BookwormAppSettingsPrivate));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_bookworm_app_settings_get_property;
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_bookworm_app_settings_set_property;
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	G_OBJECT_CLASS (klass)->finalize = bookworm_app_settings_finalize;
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), BOOKWORM_APP_SETTINGS_WINDOW_WIDTH, g_param_spec_int ("window-width", "window-width", "window-width", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), BOOKWORM_APP_SETTINGS_WINDOW_HEIGHT, g_param_spec_int ("window-height", "window-height", "window-height", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), BOOKWORM_APP_SETTINGS_POS_X, g_param_spec_int ("pos-x", "pos-x", "pos-x", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), BOOKWORM_APP_SETTINGS_POS_Y, g_param_spec_int ("pos-y", "pos-y", "pos-y", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), BOOKWORM_APP_SETTINGS_WINDOW_IS_MAXIMIZED, g_param_spec_boolean ("window-is-maximized", "window-is-maximized", "window-is-maximized", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), BOOKWORM_APP_SETTINGS_ZOOM_LEVEL, g_param_spec_double ("zoom-level", "zoom-level", "zoom-level", -G_MAXDOUBLE, G_MAXDOUBLE, 0.0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), BOOKWORM_APP_SETTINGS_READING_PROFILE, g_param_spec_string ("reading-profile", "reading-profile", "reading-profile", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), BOOKWORM_APP_SETTINGS_IS_LOCAL_STORAGE_ENABLED, g_param_spec_boolean ("is-local-storage-enabled", "is-local-storage-enabled", "is-local-storage-enabled", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), BOOKWORM_APP_SETTINGS_READING_WIDTH, g_param_spec_string ("reading-width", "reading-width", "reading-width", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), BOOKWORM_APP_SETTINGS_READING_LINE_HEIGHT, g_param_spec_string ("reading-line-height", "reading-line-height", "reading-line-height", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), BOOKWORM_APP_SETTINGS_LIBRARY_VIEW_MODE, g_param_spec_string ("library-view-mode", "library-view-mode", "library-view-mode", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 548 "settings.c"
}


static void bookworm_app_settings_instance_init (BookwormAppSettings * self) {
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	self->priv = BOOKWORM_APP_SETTINGS_GET_PRIVATE (self);
#line 555 "settings.c"
}


static void bookworm_app_settings_finalize (GObject* obj) {
	BookwormAppSettings * self;
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BOOKWORM_APP_TYPE_SETTINGS, BookwormAppSettings);
#line 29 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_g_free0 (self->priv->_reading_profile);
#line 31 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_g_free0 (self->priv->_reading_width);
#line 32 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_g_free0 (self->priv->_reading_line_height);
#line 33 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	_g_free0 (self->priv->_library_view_mode);
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	G_OBJECT_CLASS (bookworm_app_settings_parent_class)->finalize (obj);
#line 573 "settings.c"
}


GType bookworm_app_settings_get_type (void) {
	static volatile gsize bookworm_app_settings_type_id__volatile = 0;
	if (g_once_init_enter (&bookworm_app_settings_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (BookwormAppSettingsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) bookworm_app_settings_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (BookwormAppSettings), 0, (GInstanceInitFunc) bookworm_app_settings_instance_init, NULL };
		GType bookworm_app_settings_type_id;
		bookworm_app_settings_type_id = g_type_register_static (GRANITE_SERVICES_TYPE_SETTINGS, "BookwormAppSettings", &g_define_type_info, 0);
		g_once_init_leave (&bookworm_app_settings_type_id__volatile, bookworm_app_settings_type_id);
	}
	return bookworm_app_settings_type_id__volatile;
}


static void _vala_bookworm_app_settings_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	BookwormAppSettings * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, BOOKWORM_APP_TYPE_SETTINGS, BookwormAppSettings);
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	switch (property_id) {
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		case BOOKWORM_APP_SETTINGS_WINDOW_WIDTH:
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		g_value_set_int (value, bookworm_app_settings_get_window_width (self));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		break;
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		case BOOKWORM_APP_SETTINGS_WINDOW_HEIGHT:
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		g_value_set_int (value, bookworm_app_settings_get_window_height (self));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		break;
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		case BOOKWORM_APP_SETTINGS_POS_X:
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		g_value_set_int (value, bookworm_app_settings_get_pos_x (self));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		break;
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		case BOOKWORM_APP_SETTINGS_POS_Y:
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		g_value_set_int (value, bookworm_app_settings_get_pos_y (self));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		break;
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		case BOOKWORM_APP_SETTINGS_WINDOW_IS_MAXIMIZED:
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		g_value_set_boolean (value, bookworm_app_settings_get_window_is_maximized (self));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		break;
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		case BOOKWORM_APP_SETTINGS_ZOOM_LEVEL:
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		g_value_set_double (value, bookworm_app_settings_get_zoom_level (self));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		break;
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		case BOOKWORM_APP_SETTINGS_READING_PROFILE:
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		g_value_set_string (value, bookworm_app_settings_get_reading_profile (self));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		break;
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		case BOOKWORM_APP_SETTINGS_IS_LOCAL_STORAGE_ENABLED:
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		g_value_set_boolean (value, bookworm_app_settings_get_is_local_storage_enabled (self));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		break;
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		case BOOKWORM_APP_SETTINGS_READING_WIDTH:
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		g_value_set_string (value, bookworm_app_settings_get_reading_width (self));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		break;
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		case BOOKWORM_APP_SETTINGS_READING_LINE_HEIGHT:
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		g_value_set_string (value, bookworm_app_settings_get_reading_line_height (self));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		break;
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		case BOOKWORM_APP_SETTINGS_LIBRARY_VIEW_MODE:
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		g_value_set_string (value, bookworm_app_settings_get_library_view_mode (self));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		break;
#line 660 "settings.c"
		default:
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		break;
#line 666 "settings.c"
	}
}


static void _vala_bookworm_app_settings_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	BookwormAppSettings * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, BOOKWORM_APP_TYPE_SETTINGS, BookwormAppSettings);
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
	switch (property_id) {
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		case BOOKWORM_APP_SETTINGS_WINDOW_WIDTH:
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		bookworm_app_settings_set_window_width (self, g_value_get_int (value));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		break;
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		case BOOKWORM_APP_SETTINGS_WINDOW_HEIGHT:
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		bookworm_app_settings_set_window_height (self, g_value_get_int (value));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		break;
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		case BOOKWORM_APP_SETTINGS_POS_X:
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		bookworm_app_settings_set_pos_x (self, g_value_get_int (value));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		break;
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		case BOOKWORM_APP_SETTINGS_POS_Y:
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		bookworm_app_settings_set_pos_y (self, g_value_get_int (value));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		break;
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		case BOOKWORM_APP_SETTINGS_WINDOW_IS_MAXIMIZED:
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		bookworm_app_settings_set_window_is_maximized (self, g_value_get_boolean (value));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		break;
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		case BOOKWORM_APP_SETTINGS_ZOOM_LEVEL:
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		bookworm_app_settings_set_zoom_level (self, g_value_get_double (value));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		break;
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		case BOOKWORM_APP_SETTINGS_READING_PROFILE:
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		bookworm_app_settings_set_reading_profile (self, g_value_get_string (value));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		break;
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		case BOOKWORM_APP_SETTINGS_IS_LOCAL_STORAGE_ENABLED:
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		bookworm_app_settings_set_is_local_storage_enabled (self, g_value_get_boolean (value));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		break;
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		case BOOKWORM_APP_SETTINGS_READING_WIDTH:
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		bookworm_app_settings_set_reading_width (self, g_value_get_string (value));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		break;
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		case BOOKWORM_APP_SETTINGS_READING_LINE_HEIGHT:
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		bookworm_app_settings_set_reading_line_height (self, g_value_get_string (value));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		break;
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		case BOOKWORM_APP_SETTINGS_LIBRARY_VIEW_MODE:
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		bookworm_app_settings_set_library_view_mode (self, g_value_get_string (value));
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		break;
#line 742 "settings.c"
		default:
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 20 "/home/sid/Documents/Projects/bookworm/dev/src/settings.vala"
		break;
#line 748 "settings.c"
	}
}



