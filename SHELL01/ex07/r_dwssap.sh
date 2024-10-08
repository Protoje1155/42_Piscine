#!/bin/sh

FT_LINE1=7
FT_LINE2=15

cat /etc/passwd | \
grep -v '^#' | \
awk 'NR % 2 == 0' | \
cut -d ':' -f 1 | \
rev | \
sort -r | \
awk "NR >= $FT_LINE1 && NR <= $FT_LINE2" | \
awk 'NR==1 {printf "%s", $0; next} {printf "_, %s", $0} END {print "."}'
