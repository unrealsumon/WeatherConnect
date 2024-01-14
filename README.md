<h1>WeatherConnect</h1>
<p>WeatherConnect is a UE5.2 plugin which can get you real time weather details of any city or address of the world. <br> Its really easy to use. There are only two nodes/main functions: </p>
<ul>
  <li>Get Address Details</li>
    <li>Get Weather Details</li>
</ul>
<p> The Get Address Details function takes only one string param where we can provide any city/address/state name and then it will return the coordinates(lat & long) of that place. Using that coordinates we can call the second function Get Weather Details which takes the lat & lang as inputs and it will return the following weather details of that coordinate.</p>

<ul>
  <li>EWeather
    <ul>
      <li>Clear Sky</li>
      <li>Mainly Clear</li>
      <li>Partly Cloudy</li>
      <li>Overcast</li>
      <li>Fog</li>
      <li>Drizzle</li>
      <li>Rain Light</li>
      <li>Rain Moderate</li>
      <li>Rain Heavy</li>
      <li>Snow Light</li>
      <li>Snow Moderate</li>
      <li>Snow Heavy</li>   
      <li>Thunderstrom</li>
    </ul>
  </li>
  <li>Temperature in Celcius</li>
  <li>Wind Speed</li>
  <li>Wind Direction</li>
  <li>Is Day</li>
  <li>Date Time</li>
 
</ul>
<br>
<p>Below is an example use of the nodes</p>

![alt text](https://github.com/unrealsumon/WeatherConnect/blob/master/Example.png?raw=true)


<p>I've designed the weather enum based on the presets of Ultra Dynamic Sky, making it easy to integrate. <br>
Enjoy exploring the real-time weather with WeatherConnect</p>
