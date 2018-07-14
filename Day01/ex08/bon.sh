ldapsearch -Q cn | grep "cn: " | cut -d " " -f 2- | grep -c "bon"
