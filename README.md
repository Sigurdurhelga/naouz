# naouz - A Simple HTTP Server

naouz is a simple http server written in c.

# Requirements

* glib2.0

# Building

Move into the `src` directory and run:

    make

# Usage

    httpd -port N

# End Points

* /headers - Displays list HTTP request headers that were sent over to naouz
* /test - Displays list of queries (get variables) used in the request
* /colour?bg=HTML_COLOUR - Displays a blank page with the background set to HTML_COLOUR where HTML_COLOUR is an html colour (red, blue, etc.). A cookie is also set to remember HTML_COLOUR
* /colour - Displays a blank page with the background set to HTML_COLOUR if HTML_COLOUR was stored in a cookie by calling the preceeding end point
* /favicon.ico - Displays the favicon of the server. The location of the favicon is assumed to be in the same directory the executable is run in.
* Anything else defaults to a page that displays some connection information, and will display anything you POST to it

GET and HEAD are defined for the end points listed above. The POST behavour described for the catch-all page applies to the end points listed above aswell.

# Logging

Both log files are will be populated in the directory the executable is run in.

* debug.log - debugging information about naouz during execution
* access.log - information about end points requested, http status, and requesting client
