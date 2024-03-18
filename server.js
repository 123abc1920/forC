const http = require("http");
const fs = require("fs");
    
http.createServer(function(_, response){
      
    fs.readFile("index.html", (_, data) => response.end(data));
 
}).listen(3000, ()=>console.log("Сервер запущен по адресу http://localhost:3000"));

//https://metanit.com/web/javascript/12.1.php?ysclid=ltxbsy64by598514040