cat /etc/passwd | grep -v "^#" | sed -n 'n;p' | cut -d : -f 1 | rev | sort -r | awk 'NR >= $FT_LINES1 && NR <= $FT_LINES2' | tr '\n' ', ' | sed "s/,/, /g" | sed "s/..$/./"
