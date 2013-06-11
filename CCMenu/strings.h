
#ifndef CCMenu_strings_h
#define CCMenu_strings_h

#define ALERT_SERVER_DETECT_FAILURE_TITLE NSLocalizedString(@"Cannot determine server type", "Alert message when server type cannot be determined.")
#define ALERT_SERVER_DETECT_FAILURE_INFO NSLocalizedString(@"Please contact the server administrator to get the feed URL, and then enter the full URL into the field.", "Informative text when server type cannot be determined.")

#define ALERT_CONN_FAILURE_TITLE NSLocalizedString(@"Cannot retrieve project information", "Alert message when connection test fails in preferences.")
#define ALERT_CONN_FAILURE_STATUS_INFO NSLocalizedString(@"The server responded with HTTP status code %d.", "Informative text when server responded with anything but 200 OK. Placeholder is for status code.")
#define ALERT_CONN_FAILURE_STATUS401_INFO NSLocalizedString(@"The server responded with HTTP status code 401, which means \"unauthorized\". Please make sure that the username and password are correct.", "Informative text when server responded with status code 401.")

#endif