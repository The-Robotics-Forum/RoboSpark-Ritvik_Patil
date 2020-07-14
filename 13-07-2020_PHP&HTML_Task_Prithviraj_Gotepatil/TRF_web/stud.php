<?php
session_start();
include('check.php');
if(isset($_POST['submit']))
{
    $stud_id = $_POST['stud_id'];
    
    $query = "SELECT * FROM `marks` WHERE `stud_id`='$stud_id'";
    $run = mysqli_query($con, $query);
    $row = mysqli_num_rows($run);
    if($row==1)
    {
        $_SESSION['stud_id']=$stud_id;
        echo "login Successful";
        $marks_row = mysqli_fetch_assoc($run);
		echo "welcome ". $marks_row['stud_name'] . "<br>";
        echo "Branch is ". $marks_row['brach'] . "<br>";
        echo "Your is ". $marks_row['stud_id'] . "<br>";
        echo "You have scored ". $marks_row['CGPA'] . "<br>";
    }
    else
    {
        echo "Login unsucessful";
    }
}
?>