echo Enter the url for the web page
read url

wget -r -np -k $url 