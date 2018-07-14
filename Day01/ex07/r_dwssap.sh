cat /etc/passwd | grep -e "^[^#]" | awk '{if (NR!=1 && NR%2==0) {print $0}}' | cut -d ":" -f 1 | rev | sort -r | grep "^[$FT_LINE1-$FT_LINE2]" | tr '\n' ', ' | sed -e 's/,$/./'
