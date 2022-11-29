#!/bin/sh
echo "Enter commit message: "
read message
git add . && git commit -m "$message" && git push
git commit -m "$message" || echo "git commit failed"
