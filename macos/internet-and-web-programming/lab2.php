<html>
<head>
    <title>Add User</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            background-image: url('https://images.unsplash.com/photo-1554147090-e1221a04a025?q=80&w=2348&auto=format&fit=crop&ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D');
            background-size: cover;
            background-position: center;
            margin: 0;
            padding: 0;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
        }
        h1 {
            color: #1e044d;
        }
        form {
            background: rgba(255, 255, 255, 0.9);
            padding: 20px;
            border-radius: 8px;
        }
        label {
            display: block;
            margin-bottom: 8px;
            color: #1e044d;
        }
        input[type="text"], input[type="password"] {
            width: 100%;
            padding: 10px;
            margin-bottom: 20px;
            border: 1px solid #ccc;
            border-radius: 4px;
        }
        button {
            background-color: pink;
            color: #1e044d;
            border: none;
            padding: 10px 20px;
            text-align: center;

            display: inline-block;
            font-size: 16px;
            margin: 4px 2px;
            cursor: pointer;
            border-radius: 4px;
        }
    </style>
</head>
<body>
    <div>
        <h1>Add User</h1>
        <form method="post" action="">
            <label for="username">Username:</label>
            <input type="text" id="username" name="username" required>

            <label for="password">Password:</label>
            <input type="password" id="password" name="password" required>

            <button type="submit">Add User</button>
        </form>

        <?php
        if ($_SERVER['REQUEST_METHOD'] == 'POST') {
            $username = $_POST['username'];
            $password = $_POST['password'];

            $username = htmlspecialchars($username);
            $password = htmlspecialchars($password);

            $file = fopen("users.txt", "a");

            if ($file) {
                fwrite($file, "Username: $username, Password: $password\n");
                fclose($file);
                header("Location: " . $_SERVER['PHP_SELF']);
                exit;
            } else {
                echo "Unable to open the file!";
            }
        }
        ?>
    </div>
</body>
</html>
