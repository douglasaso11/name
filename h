<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Backforums</title>
    <style>
      /* ... (Sleek dark modern design for the forum) */
      body {
        background-color: #000;
        color: #f00;
        font-family: 'Impact', sans-serif;
        margin: 0;
        padding: 20px;
      }
      #message-container{
        display: flex;
        flex-direction: column;
        gap: 10px;
      }
      .message{
        background-color: #111;
        padding: 10px;
        border-radius: 5px;
      }
      .message .username{
        font-weight: bold;
        margin-bottom: 5px;
      }
      #message-form{
        display: flex;
        flex-direction: column;
        gap: 10px;
      }
      #message-form input, #message-form textarea{
        background-color: #222;
        color: #eee;
        padding: 10px;
        border-radius: 5px;
        border: none;
      }
      #message-form button{
        background-color: #f00;
        color: #000;
        padding: 10px;
        border-radius: 5px;
        border: none;
        cursor: pointer;
      }
    </style>
</head>
<body>
    <h1>Backforums</h1>

    <div id="message-container">
        </div>

    <form id="message-form">
        <input type="text" id="username" placeholder="Username">
        <textarea id="message" placeholder="Enter your message"></textarea>
        <button type="submit">Send</button>
    </form>

    <script>
        const messageContainer = document.getElementById('message-container');
        const messageForm = document.getElementById('message-form');

        messageForm.addEventListener('submit', (event) => {
            event.preventDefault(); // Prevent form from actually submitting

            const username = document.getElementById('username').value || "Anonymous";
            const message = document.getElementById('message').value;

            if (message.trim() !== "") {
                const newMessage = document.createElement('div');
                newMessage.classList.add('message');
                newMessage.innerHTML = `<div class="username">${username}:</div>${message}`;
                messageContainer.appendChild(newMessage);

                // Clear the form
                document.getElementById('message').value = '';
            }
        });
    </script>

</body>
</html>
