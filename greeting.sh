echo "What is your name?"
read name
echo"What is your gender? (M for Male/F for Female)"
read g
if [ $g -eq M ]
then
     echo "Welcome!! Mr. $name , Nice to meet you"
else
    echo "Welcome!! MrS./Ms. $name , Nice to meet you"
fi
