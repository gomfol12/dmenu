/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Iosevka Medium Extended:pixelsize=12:antialias=true:autohint=true",
	"Symbols Nerd Font:pixelsize=12",
	"JoyPixels:pixelsize=12:antialias=true:autohint=true",
    "Noto Emoji:pixelsize=12:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *symbol_1 = "<-";
static const char *symbol_2 = "->";
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#ffffff", "#1a1a1a" },
	[SchemeSel] = { "#ffffff", "#666666" },
	[SchemeSelHighlight] = { "#10a204", "#666666" },
	[SchemeNormHighlight] = { "#10a204", "#1a1a1a" },
	[SchemeOut] = { "#000000", "#000000" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 20;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
