// Weather Class
// Getters
Weather getWeather();
bool getRain();
int getWindSpeed();
float getHumidity();
float getTemperature();

// Setters
void setWeather(Weather weather); /// <weather="Weather"> Set the Weather Object. </param>
void setRain(bool rain);
void setWindSpeed(int windSpeed);
void setHumidity(float humidity);
void setTemperature(float temperature);	

// PavillionControl Class
// Getters
DateTime getDateTime();

// Setters
void setDateTime(DateTime dateTime);

// Function Prototypes
void CheckMeasurements(); 

// Motor Class
// Getters
int getPosition();
int getStroke();
int getTime();

//Setters
void setPosition(int position);
void setStroke(int stroke);
void setTime(int time);

// Function Prototypes
int measureStroke();
void open();
void close();
