/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int alpha = 0xff;     /* Amount of opacity. 0xff is opaque             */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 200;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const int user_bh = 0;               /* add an defined amount of pixels to the bar height */

static const char *fonts[] = {
	"RobotoMono Nerd Font:style=Bold:pixelsize=16:antialias=true:autohint=true",
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char col_text[]   = "#f6f1ee";
static const char col_dark[]   = "#1e1c19";
static const char col_mid[]    = "#6c5f5b";
static const char col_bright[] = "#ed7d31";

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm]          = { col_text  , col_dark   },
	[SchemeSel]           = { col_dark  , col_bright },
	[SchemeSelHighlight]  = { col_text  , col_mid    },
	[SchemeNormHighlight] = { col_bright, col_dark   },
	[SchemeOut]           = { "#bf0cd8" , "#bf0cd8"  },
	[SchemeOutHighlight]  = { "#bf0cd8" , "#bf0cd8"  },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 5;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 3;
