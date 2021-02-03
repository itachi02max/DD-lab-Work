function func() {
str="A function has been called"
echo $str
}

touch tester.txt
chmod 000 tester.txt
chmod 777 tester.txt

for ((i = 1; i < 5; i++))
do
	echo "inside for loop" $i
done

echo $(func)

echo Sleep for 5 seconds
sleep 5

echo These are all the files in this directory
ls -al

echo "Total command line arguments : $#"
echo "1st Argument = $1"
echo "2nd argument = $2"

string1="This is the first part"
string2="This is the second part"
string3=$string1+$string2
echo "The concatenated string is:"
echo $string3
