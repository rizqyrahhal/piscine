cat /etc/passwd | grep -v '\#' | cut -d':' -f1 | rev | sort -r | awk 'NR>= ENVIRON["FT_LINE1"] && NR<= ENVIRON["FT_LINE2"]' | paste -s -d"," - | sed 's/$/./' | tr -d '\n'
