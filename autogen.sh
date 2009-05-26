#! /bin/sh

aclocal --force \
&& glibtoolize --force --copy \
&& automake --add-missing --copy --force-missing --warnings=all \
&& autoconf --force --warnings=all,no-obsolete \
&& rm -rf autom4te.cache \
&& echo "Done"

# This was after autoconf
#&& autoheader --force --warnings=all \
