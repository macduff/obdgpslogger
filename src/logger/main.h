/* Copyright 2009 Gary Briggs

This file is part of obdgpslogger.

obdgpslogger is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

obdgpslogger is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with obdgpslogger.  If not, see <http://www.gnu.org/licenses/>.
*/


/** \file
 \brief main obdlogger entrypoint
 */
#ifndef __MAIN_H
#define __MAIN_H

#include <getopt.h>
#include <stdlib.h>

/// getopt() long options
static const struct option longopts[] = {
	{ "help", no_argument, NULL, 'h' }, ///< Print the help text
	{ "version", no_argument, NULL, 'v' }, ///< Print the version text
	{ "serial", required_argument, NULL, 's' }, ///< Serial Port
	{ "samplerate", required_argument, NULL, 'a' }, ///< Number of samples per second
	{ "count", required_argument, NULL, 'c' }, ///< Number of values to grab
	{ "capabilities", no_argument, NULL, 'p' }, ///< Show the capabilities the OBD device claims it can report
	{ "no-autotrip", no_argument, NULL, 'n' }, ///< Disable automatic trip starting and stopping
	{ "spam-stdout", no_argument, NULL, 't' }, ///< Spam readings to stdout
	{ "serial-log", required_argument, NULL, 'l' }, ///< Log serial port data transfer
	{ "enable-optimisations", no_argument, NULL, 'o' }, ///< Enable elm optimisations
	{ "daemon", no_argument, NULL, 'm' }, ///< Daemonise
	{ "db", required_argument, NULL, 'd' }, ///< Database file
	{ NULL, 0, NULL, 0 } ///< End
};

/// getopt() short options
static const char shortopts[] = "htmnvs:d:l:c:a:op";

/// Print Help for --help
/** \param argv0 your program's argv[0]
 */
void printhelp(const char *argv0);

/// Print the version string
void printversion();

#endif // __MAIN_H
