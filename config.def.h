/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
static const float menu_height_ratio = 4.0f;  /* This is the ratio used in the original calculation */
static int fuzzy  = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"slpeen:size=24",
	"Symbols Nerd Font Mono:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     		    fg         bg       */
	[SchemeNorm] = { "#C5C9C5", "#181616" },
	[SchemeSel] = { "#C5C9C5", "#393836" },
	[SchemeOut] = { "#181616", "#87A987" },
	[SchemeBorder] = { "#C4746E", NULL },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 26;
static unsigned int min_lineheight = 2;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;
