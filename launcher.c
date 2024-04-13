// Header file for input output functions
#include <stdio.h>
#include <stdlib.h>
//Inlcude custom headers
#include "calculator.h"
//#include "guilaunch.h"

// #include <gtk/gtk.h>

// static void print_hello(GtkWidget widget, gpointer data) { g_print("Hello World\n"); }

// static void activate(GtkApplicationapp, gpointer user_data) {
//   GtkWidget window;
//   GtkWidgetlabel = gtk_label_new (NULL);

//   window = gtk_application_window_new(app);
//   gtk_window_set_title(GTK_WINDOW(window), "GTK-4.0 Test Window");
//   gtk_window_set_default_size(GTK_WINDOW(window), 800, 600);

//   gtk_label_set_markup (GTK_LABEL (label), "Hello World");
//   gtk_label_set_xalign(GTK_LABEL (label), 0.5f);
//   gtk_label_set_yalign(GTK_LABEL (label), 0.5f);

//   gtk_window_set_child(GTK_WINDOW(window), label);
//   gtk_window_present(GTK_WINDOW(window));
// }

// int main(int argc, char *argv) {
//   GtkApplicationapp;
//   int status;

//   app = gtk_application_new("org.gtk.example", G_APPLICATION_DEFAULT_FLAGS);
//   g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
//   status = g_application_run(G_APPLICATION(app), argc, argv);
//   g_object_unref(app);

//   return status;
// }

//main function -
//where the execution of program begins
int main()
{

	// prints welcome message
	printf("Welcome to Kierans C Language Demo Program\n");
	initCalculator();
	return 0;
}
