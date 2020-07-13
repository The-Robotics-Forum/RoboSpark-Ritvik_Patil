<?php
include('db.php');
if(isset($_POST['submit'])){
    $stud_id= $_POST['stud_id'];

    $query="SELECT * FROM `stud` WHERE `stud_id`='$stud_id'";
    $run = mysqli_query($con,$query);
    $row=mysqli_num_rows($run);
    if($row == 1)
    {
        echo "Success <br>";
        $user_row= mysqli_fetch_assoc($run);

        echo "<br> Welcome ".$user_row['stud_name'];
        echo "<br> Your Student ID is: ".$user_row['stud_id']; 
        echo "<br>Your branch is: ".$user_row['stud_branch'];
        echo "<br>Your CGPA is: ".$user_row['stud_cgpa']; 
        echo "<hr>";
    }
    else{
        echo "Please Enter Valid ID";
    }
}

?>