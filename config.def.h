/* user and group to drop privileges to */
static const char *user  = "jbalatos";
static const char *group = "jbalatos";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#282828",     /* after initialization */
	[INPUT] =  "#458588",   /* during input */
	[FAILED] = "#CC241D",   /* wrong password */
	[CAPS] = "#D79921",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/*Set Blur radius*/
static const int blurRadius=0;
static const int pixelSize=5;
