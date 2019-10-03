const char connect_page1[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
<head>
<style>
body {
  background-color:#707070;
  color: white;
}
input[type=text]{
  border: 2px solid lime;
  padding: 2px;
  font-size: 16px;
}
input[type=password]{
  border: 2px solid red;
  padding: 2px;
  font-size: 16px;
}
input[type=submit]{
    border: none;
    border-radius: 12px;
    color: royalblue;
    padding: 12px;
    text-align: center;
    text-decoration: none;
    display: inline-block;
    font-size: 16px;
    margin: 4px 2px;
    cursor: pointer;
}
</style>
</head>
<body>
<h2>Connect to WiFi</h4>
  <form method ='post' action='/doConnect' enctype='multipart/form-data'>
    SSID:<br>
      <input type='text' id='ssid' name='ssid'><br>
    Password:<br>
      <input type='password' id='pw' name='pw'><br>
      <input type='checkbox' id='AP_ONLY' name='AP_ONLY'>Access Point Only<br>
      <input type='checkbox' id'btSwitch' name='btSwitch'>Use Bluetooth<br>
    <input type='submit' id='Connect' value='Connect'>
  </form>
)=====";

const char connect_page2[] PROGMEM = R"=====(
</body>
</html>
)=====";
/* Auto-reconnect?
      <input type='checkbox' id='rc' name='rc'><br>
    Save?
      <input type='checkbox' id='save' name='save'>

      */
