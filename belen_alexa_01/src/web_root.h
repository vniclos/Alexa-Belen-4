#ifndef _WEB_ROOT_H
#define _WEB_ROOT_H

const char g_HTML_Web_root[] PROGMEM = R"=====(
    <!DOCTYPE html><html><head> 
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
	<meta name=viewport content="width=device-width, initial-scale=1">
<link rel="stylesheet" type="text/css" href="css.css"><script src="/js.js"></script> <title>Belen participativo </title> 
</head>
<body>
<div id="divbody">
<div class="row">
	<div class="column">
		<img  style=" width:120px; "src='/svg.svg' alt="Belen de Vicente y Margarita">
	</div>
	<div class="column" >
			<spam class="title">Belen participativo
			<br/><spam class="titlesub">Añade, no importa tamño, ni estilo</spam></spam>
	</div>
  <div class="clear"></div>
</div>

 <fieldset>
   <legend>Portal :</legend>
  <br/>
  <input type="button" Class="button" onClick="jsCmd(0,0,'idMsg0')" value ="Off"/>
  <input type="button" Class="button" onClick="jsCmd(0,1,'idMsg0')" value ="ON"/>
  <br/>Alexa! Portal (Enciende, apaga)
  <br/><span id="idMsg0">.</span>
</fieldset>
 <fieldset>
<legend>Cielo</legend>
  <br/>
  <input type="button" Class="button" onClick="jsCmd(1,0,'idMsg1')" value ="Off"/>
  <input type="button" Class="button" onClick="jsCmd(1,1,'idMsg1')" value ="ON"/>
  <input type="button" Class="button" onClick="jsCmd(1,2,'idMsg1')" value ="Flash"/>
  <input type="button" Class="button" onClick="jsCmd(1,3,'idMsg1')" value ="Flash randon"/>
  <br/>Alexa! Cielo (Enciende, apaga)
  <br/><span id="idMsg1">.</span>
  </fieldset>
 <fieldset>
<legend>Fuego</legend>
  <br/>
  <input type="button" Class="button" onClick="jsCmd(2,0,'idMsg2')" value ="Off"/>
  <input type="button" Class="button" onClick="jsCmd(2,1,'idMsg2')" value ="ON"/>
  <input type="button" Class="button" onClick="jsCmd(2,2,'idMsg2')" value ="Flash"/>
  <input type="button" Class="button" onClick="jsCmd(2,3,'idMsg2')" value ="Flash randon"/>
  <br/>Alexa! Fuego (Enciende, apaga)
  <br/><span id="idMsg2">.</span>
</fieldset>
 <fieldset>

<legend>4: Castillo</legend>
  <br/>
  <input type="button" Class="button" onClick="jsCmd(3,0,'idMsg3')" value ="Off"/>
  <input type="button" Class="button" onClick="jsCmd(3,1,'idMsg3')" value ="ON"/>
  <input type="button" Class="button" onClick="jsCmd(3,2,'idMsg3')" value ="Flash"/>
  <input type="button" Class="button" onClick="jsCmd(3,3,'idMsg3')" value ="Flash randon"/>
  <br/>Alexa! Castillo (Enciende, apaga)
  <br/><span id="idMsg3">.</span>
</fieldset>
<script>
function jsCmd(idRelay,value,idMsg)
{
  let url="/cmd?id="+idRelay+"&value="+value;
  document.getElementById(idMsg).innerHTML = url;
  fncGetHtml(idMsg, url) ;
	}
</script>
<br/>
<div id="scnMsg">.</div>
<div id="scnBody">.</div>
<div id="scnDebug"></div>
</div>
</body>
</html>
)=====";
#endif