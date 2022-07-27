#!/bin/bash
cat /etc/passwd | grep -v '^#' | awk 'NR%2==0'| cut -d':' -f1 | rev | sort -r | awk '{if (NR >= FT_LINE1 && NR <= FT_LINE2) print }' | sed -e 's/$/,/g' | tr -d '\n' | sed 's/.$/\./'