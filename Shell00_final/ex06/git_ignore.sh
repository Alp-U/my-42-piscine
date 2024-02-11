#!/bin/sh
git -C $(git rev-parse --show-toplevel) ls-files -o -i --exclude-standard
