#!/bin/bash
groups $FT_USER | cut -d':' -f2| sed 's/^[ \t]*//' | tr ' ' ',' | tr -d '\n';