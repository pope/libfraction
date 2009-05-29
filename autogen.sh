#! /bin/sh

aclocal --force \
&& glibtoolize --force --copy \
&& autoheader --force --warnings=all \
&& automake --add-missing --copy --force-missing --warnings=all \
&& autoconf --force --warnings=all,no-obsolete \
&& rm -rf autom4te.cache \
&& echo "Done"
