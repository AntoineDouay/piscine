#!/bin/sh
cat /etc/passwd | grep -v '^#' | cut -d : -f 1 | awk '{if (NR%2==0) print $0}' | rev | sort -r | sed -n "$FT_LINE1, $FT_LINE2 p" | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./g' | cat -e
