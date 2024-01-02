#!/usr/bin/python3

if [ -z "$PYFILE"]; then
echo "Error: The environment variable \$PYFILE is not set."
exit 1
fi

if [ ! -f "$PYFILE" ]; then
echo "Error: Python file '$PYFILE' not found."
exit 1
fi

python3 "$PYFILE"
