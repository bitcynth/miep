#include <ncurses.h>

#include "debug_console.h"

class processor;

class debug_console_simple : public debug_console
{
public:
	debug_console_simple();
	virtual ~debug_console_simple();

	void init();

	void tick(processor *p);

	void dc_log(const char *fmt, ...);

	void dc_term(const char *fmt, ...);
};
