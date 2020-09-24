#ifndef _CPM_VERSION_H_
#define _CPM_VERSION_H_

#define CPM_CLIENT_VERSION                  "0.1"
#define CPM_CLIENT_VERSION_NAME             "Version 0.1"
#define CPM_CLIENT_VERSION_DATE			    "23/09/2020"
#define CPM_CLIENT_VERSION_TIME			    "23:24 CST"
#define CPM_CLIENT_VERSION_AUTHOR			"Erick Salas"

// print full cpm client version information 
extern void cpm_client_version_print_full (void);

// print the version id
extern void cpm_client_version_print_version_id (void);

// print the version name
extern void cpm_client_version_print_version_name (void);

#endif