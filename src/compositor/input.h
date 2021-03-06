
extern void
get_keymap(int *fd, int *size);

extern gboolean
key_press_event(ClutterActor *actor,
                ClutterKeyEvent *event,
                gpointer data);

extern gboolean
key_release_event(ClutterActor *actor,
                  ClutterKeyEvent *event,
                  gpointer data);

extern gboolean
enter_event(ClutterActor *actor,
            ClutterCrossingEvent *event,
            gpointer data);

extern gboolean
leave_event(ClutterActor *actor,
            ClutterEvent *event,
            gpointer      data);

void
key_focus_in(ClutterActor *actor,
             gpointer      user_data);
void
key_focus_out(ClutterActor *actor,
              gpointer      user_data);
