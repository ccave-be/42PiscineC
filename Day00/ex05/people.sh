ldapsearch -Q -LLL "(uid=z*)" cn | grep "cn:" | cut -c 5- | sort -r --ignore-case
