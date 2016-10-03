#ifndef LOG_H
#define LOG_H

#include <glib.h>
#include <stdio.h>
#include <stdbool.h>

#include "constants.h"

const gchar * log_level_to_string (GLogLevelFlags level);

void httpd_log_all_handler_cb (const gchar *log_domain, 
							   GLogLevelFlags log_level, 
							   const gchar *message,
							   gpointer user_data);

void httpd_log_access(gchar *client_ip, 
					  int client_port,
					  gchar *req_method,
					  gchar *host_name, 
					  gchar *uri, 
					  gchar *response_code);

void write_to_log_file(gchar *file_location, GString *error_string);

#endif