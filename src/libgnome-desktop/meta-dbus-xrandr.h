/*
 * Generated by gdbus-codegen 2.54.3. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __META_DBUS_XRANDR_H__
#define __META_DBUS_XRANDR_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.gnome.Mutter.DisplayConfig */

#define META_DBUS_TYPE_DISPLAY_CONFIG (meta_dbus_display_config_get_type ())
#define META_DBUS_DISPLAY_CONFIG(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), META_DBUS_TYPE_DISPLAY_CONFIG, MetaDBusDisplayConfig))
#define META_DBUS_IS_DISPLAY_CONFIG(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), META_DBUS_TYPE_DISPLAY_CONFIG))
#define META_DBUS_DISPLAY_CONFIG_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), META_DBUS_TYPE_DISPLAY_CONFIG, MetaDBusDisplayConfigIface))

struct _MetaDBusDisplayConfig;
typedef struct _MetaDBusDisplayConfig MetaDBusDisplayConfig;
typedef struct _MetaDBusDisplayConfigIface MetaDBusDisplayConfigIface;

struct _MetaDBusDisplayConfigIface
{
  GTypeInterface parent_iface;



  gboolean (*handle_apply_configuration) (
    MetaDBusDisplayConfig *object,
    GDBusMethodInvocation *invocation,
    guint arg_serial,
    gboolean arg_persistent,
    GVariant *arg_crtcs,
    GVariant *arg_outputs);

  gboolean (*handle_change_backlight) (
    MetaDBusDisplayConfig *object,
    GDBusMethodInvocation *invocation,
    guint arg_serial,
    guint arg_output,
    gint arg_value);

  gboolean (*handle_get_crtc_gamma) (
    MetaDBusDisplayConfig *object,
    GDBusMethodInvocation *invocation,
    guint arg_serial,
    guint arg_crtc);

  gboolean (*handle_get_resources) (
    MetaDBusDisplayConfig *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_set_crtc_gamma) (
    MetaDBusDisplayConfig *object,
    GDBusMethodInvocation *invocation,
    guint arg_serial,
    guint arg_crtc,
    GVariant *arg_red,
    GVariant *arg_green,
    GVariant *arg_blue);

  gint  (*get_power_save_mode) (MetaDBusDisplayConfig *object);

  void (*monitors_changed) (
    MetaDBusDisplayConfig *object);

};

GType meta_dbus_display_config_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *meta_dbus_display_config_interface_info (void);
guint meta_dbus_display_config_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void meta_dbus_display_config_complete_get_resources (
    MetaDBusDisplayConfig *object,
    GDBusMethodInvocation *invocation,
    guint serial,
    GVariant *crtcs,
    GVariant *outputs,
    GVariant *modes,
    gint max_screen_width,
    gint max_screen_height);

void meta_dbus_display_config_complete_apply_configuration (
    MetaDBusDisplayConfig *object,
    GDBusMethodInvocation *invocation);

void meta_dbus_display_config_complete_change_backlight (
    MetaDBusDisplayConfig *object,
    GDBusMethodInvocation *invocation,
    gint new_value);

void meta_dbus_display_config_complete_get_crtc_gamma (
    MetaDBusDisplayConfig *object,
    GDBusMethodInvocation *invocation,
    GVariant *red,
    GVariant *green,
    GVariant *blue);

void meta_dbus_display_config_complete_set_crtc_gamma (
    MetaDBusDisplayConfig *object,
    GDBusMethodInvocation *invocation);



/* D-Bus signal emissions functions: */
void meta_dbus_display_config_emit_monitors_changed (
    MetaDBusDisplayConfig *object);



/* D-Bus method calls: */
void meta_dbus_display_config_call_get_resources (
    MetaDBusDisplayConfig *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean meta_dbus_display_config_call_get_resources_finish (
    MetaDBusDisplayConfig *proxy,
    guint *out_serial,
    GVariant **out_crtcs,
    GVariant **out_outputs,
    GVariant **out_modes,
    gint *out_max_screen_width,
    gint *out_max_screen_height,
    GAsyncResult *res,
    GError **error);

gboolean meta_dbus_display_config_call_get_resources_sync (
    MetaDBusDisplayConfig *proxy,
    guint *out_serial,
    GVariant **out_crtcs,
    GVariant **out_outputs,
    GVariant **out_modes,
    gint *out_max_screen_width,
    gint *out_max_screen_height,
    GCancellable *cancellable,
    GError **error);

void meta_dbus_display_config_call_apply_configuration (
    MetaDBusDisplayConfig *proxy,
    guint arg_serial,
    gboolean arg_persistent,
    GVariant *arg_crtcs,
    GVariant *arg_outputs,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean meta_dbus_display_config_call_apply_configuration_finish (
    MetaDBusDisplayConfig *proxy,
    GAsyncResult *res,
    GError **error);

gboolean meta_dbus_display_config_call_apply_configuration_sync (
    MetaDBusDisplayConfig *proxy,
    guint arg_serial,
    gboolean arg_persistent,
    GVariant *arg_crtcs,
    GVariant *arg_outputs,
    GCancellable *cancellable,
    GError **error);

void meta_dbus_display_config_call_change_backlight (
    MetaDBusDisplayConfig *proxy,
    guint arg_serial,
    guint arg_output,
    gint arg_value,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean meta_dbus_display_config_call_change_backlight_finish (
    MetaDBusDisplayConfig *proxy,
    gint *out_new_value,
    GAsyncResult *res,
    GError **error);

gboolean meta_dbus_display_config_call_change_backlight_sync (
    MetaDBusDisplayConfig *proxy,
    guint arg_serial,
    guint arg_output,
    gint arg_value,
    gint *out_new_value,
    GCancellable *cancellable,
    GError **error);

void meta_dbus_display_config_call_get_crtc_gamma (
    MetaDBusDisplayConfig *proxy,
    guint arg_serial,
    guint arg_crtc,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean meta_dbus_display_config_call_get_crtc_gamma_finish (
    MetaDBusDisplayConfig *proxy,
    GVariant **out_red,
    GVariant **out_green,
    GVariant **out_blue,
    GAsyncResult *res,
    GError **error);

gboolean meta_dbus_display_config_call_get_crtc_gamma_sync (
    MetaDBusDisplayConfig *proxy,
    guint arg_serial,
    guint arg_crtc,
    GVariant **out_red,
    GVariant **out_green,
    GVariant **out_blue,
    GCancellable *cancellable,
    GError **error);

void meta_dbus_display_config_call_set_crtc_gamma (
    MetaDBusDisplayConfig *proxy,
    guint arg_serial,
    guint arg_crtc,
    GVariant *arg_red,
    GVariant *arg_green,
    GVariant *arg_blue,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean meta_dbus_display_config_call_set_crtc_gamma_finish (
    MetaDBusDisplayConfig *proxy,
    GAsyncResult *res,
    GError **error);

gboolean meta_dbus_display_config_call_set_crtc_gamma_sync (
    MetaDBusDisplayConfig *proxy,
    guint arg_serial,
    guint arg_crtc,
    GVariant *arg_red,
    GVariant *arg_green,
    GVariant *arg_blue,
    GCancellable *cancellable,
    GError **error);



/* D-Bus property accessors: */
gint meta_dbus_display_config_get_power_save_mode (MetaDBusDisplayConfig *object);
void meta_dbus_display_config_set_power_save_mode (MetaDBusDisplayConfig *object, gint value);


/* ---- */

#define META_DBUS_TYPE_DISPLAY_CONFIG_PROXY (meta_dbus_display_config_proxy_get_type ())
#define META_DBUS_DISPLAY_CONFIG_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), META_DBUS_TYPE_DISPLAY_CONFIG_PROXY, MetaDBusDisplayConfigProxy))
#define META_DBUS_DISPLAY_CONFIG_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), META_DBUS_TYPE_DISPLAY_CONFIG_PROXY, MetaDBusDisplayConfigProxyClass))
#define META_DBUS_DISPLAY_CONFIG_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), META_DBUS_TYPE_DISPLAY_CONFIG_PROXY, MetaDBusDisplayConfigProxyClass))
#define META_DBUS_IS_DISPLAY_CONFIG_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), META_DBUS_TYPE_DISPLAY_CONFIG_PROXY))
#define META_DBUS_IS_DISPLAY_CONFIG_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), META_DBUS_TYPE_DISPLAY_CONFIG_PROXY))

typedef struct _MetaDBusDisplayConfigProxy MetaDBusDisplayConfigProxy;
typedef struct _MetaDBusDisplayConfigProxyClass MetaDBusDisplayConfigProxyClass;
typedef struct _MetaDBusDisplayConfigProxyPrivate MetaDBusDisplayConfigProxyPrivate;

struct _MetaDBusDisplayConfigProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  MetaDBusDisplayConfigProxyPrivate *priv;
};

struct _MetaDBusDisplayConfigProxyClass
{
  GDBusProxyClass parent_class;
};

GType meta_dbus_display_config_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MetaDBusDisplayConfigProxy, g_object_unref)
#endif

void meta_dbus_display_config_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
MetaDBusDisplayConfig *meta_dbus_display_config_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
MetaDBusDisplayConfig *meta_dbus_display_config_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void meta_dbus_display_config_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
MetaDBusDisplayConfig *meta_dbus_display_config_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
MetaDBusDisplayConfig *meta_dbus_display_config_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define META_DBUS_TYPE_DISPLAY_CONFIG_SKELETON (meta_dbus_display_config_skeleton_get_type ())
#define META_DBUS_DISPLAY_CONFIG_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), META_DBUS_TYPE_DISPLAY_CONFIG_SKELETON, MetaDBusDisplayConfigSkeleton))
#define META_DBUS_DISPLAY_CONFIG_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), META_DBUS_TYPE_DISPLAY_CONFIG_SKELETON, MetaDBusDisplayConfigSkeletonClass))
#define META_DBUS_DISPLAY_CONFIG_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), META_DBUS_TYPE_DISPLAY_CONFIG_SKELETON, MetaDBusDisplayConfigSkeletonClass))
#define META_DBUS_IS_DISPLAY_CONFIG_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), META_DBUS_TYPE_DISPLAY_CONFIG_SKELETON))
#define META_DBUS_IS_DISPLAY_CONFIG_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), META_DBUS_TYPE_DISPLAY_CONFIG_SKELETON))

typedef struct _MetaDBusDisplayConfigSkeleton MetaDBusDisplayConfigSkeleton;
typedef struct _MetaDBusDisplayConfigSkeletonClass MetaDBusDisplayConfigSkeletonClass;
typedef struct _MetaDBusDisplayConfigSkeletonPrivate MetaDBusDisplayConfigSkeletonPrivate;

struct _MetaDBusDisplayConfigSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  MetaDBusDisplayConfigSkeletonPrivate *priv;
};

struct _MetaDBusDisplayConfigSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType meta_dbus_display_config_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MetaDBusDisplayConfigSkeleton, g_object_unref)
#endif

MetaDBusDisplayConfig *meta_dbus_display_config_skeleton_new (void);


G_END_DECLS

#endif /* __META_DBUS_XRANDR_H__ */
