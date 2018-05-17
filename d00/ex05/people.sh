ldapsearch -o ldif-wrap=no -L cn='z*' cn | grep '^cn:' | sort -r -f | cut -c 5-999
