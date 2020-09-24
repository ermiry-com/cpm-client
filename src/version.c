#include <stdio.h>

#include "version.h"

// print full cpm version information 
void cpm_client_version_print_full (void) {

    printf ("\nCPM Client Version: %s\n", CPM_CLIENT_VERSION_NAME);
    printf ("Release Date & time: %s - %s\n", CPM_CLIENT_VERSION_DATE, CPM_CLIENT_VERSION_TIME);
    printf ("Author: %s\n\n", CPM_CLIENT_VERSION_AUTHOR);

}

// print the version id
void cpm_client_version_print_version_id (void) {

    printf ("\nCPM Client Version ID: %s\n", CPM_CLIENT_VERSION);

}

// print the version name
void cpm_client_version_print_version_name (void) {

    printf ("\nCPM Client Version: %s\n", CPM_CLIENT_VERSION_NAME);

}