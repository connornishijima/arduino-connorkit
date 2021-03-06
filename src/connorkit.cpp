/*
  connorkit.cpp - Swiss army knife full of useful Arduino Functions
  Created by Connor Nishijima, September 8th 2016.
  Released under the GPLv3 license.
  
  This source code uses Doxygen markup for some of it's documentation,
  and is best viewed using http://connor-n.com/kit/docs
*/

#include "connorkit.h"

/**
Used to initialize the ConnorKit library. Example usage before setup() would be:
<pre>
ConnorKit ck;
</pre>
"ck" can be anything you want, as long as it's reflected in the rest of your code. Because each of these functions are wrapped in the ConnorKit class, you'll use them like this:
<pre>
ck.array_sum(arr,len);
</pre>
*/
ConnorKit::ConnorKit() {
};

/** @ingroup array
Prints an array to Serial, using a custom delimiter. Must call Serial.begin() first!
@param arr The array to print
@param len Length of the array, since this cannot be calculated within the function due to pointers.
@param delim Delimiter to use for item separation (optional, default = ',')
*/
uint8_t ConnorKit::array_print_f(uint8_t arr[],uint16_t len, char delim = ','){
  for(uint16_t i = 0; i < len; i++){
    Serial.print(arr[i]);
	if(i != len-1){
      Serial.print(delim);
	  Serial.print(' ');
	}
  }
  Serial.println();
  return 1;
}

/** @ingroup array
Prints an array to Serial, using a custom delimiter. Must call Serial.begin() first!
@param arr The array to print
@param len Length of the array, since this cannot be calculated within the function due to pointers.
@param delim Delimiter to use for item separation (optional, default = ',')
*/
int16_t ConnorKit::array_print_f(int16_t arr[],uint16_t len, char delim = ','){
  for(uint16_t i = 0; i < len; i++){
    Serial.print(arr[i]);
	if(i != len-1){
      Serial.print(delim);
	  Serial.print(' ');
	}
  }
  Serial.println();
  return 1;
}

/** @ingroup array
Prints an array to Serial, using a custom delimiter. Must call Serial.begin() first!
@param arr The array to print
@param len Length of the array, since this cannot be calculated within the function due to pointers.
@param delim Delimiter to use for item separation (optional, default = ',')
*/
uint16_t ConnorKit::array_print_f(uint16_t arr[],uint16_t len, char delim = ','){
  for(uint16_t i = 0; i < len; i++){
    Serial.print(arr[i]);
	if(i != len-1){
      Serial.print(delim);
	  Serial.print(' ');
	}
  }
  Serial.println();
  return 1;
}

/** @ingroup array
Prints an array to Serial, using a custom delimiter. Must call Serial.begin() first!
@param arr The array to print
@param len Length of the array, since this cannot be calculated within the function due to pointers.
@param places Number of decimal places to print (optional, default = 2)
@param delim Delimiter to use for item separation (optional, default = ',')
*/
float ConnorKit::array_print_f(float arr[],uint16_t len, char delim = ','){
  for(uint16_t i = 0; i < len; i++){
    Serial.print(arr[i],5);
	if(i != len-1){
	  Serial.print(delim);
	  Serial.print(' ');
	}
  }
  Serial.println();
  return 1;
}

/** @ingroup array
Shifts all values in an array left, and appends a new value to the last slot, allowing for a buffer or log.
@param arr The array to shift/append to
@param len Length of the array, since this cannot be calculated within the function due to pointers.
@param newVal The new value to add onto the end of the array
*/
uint8_t ConnorKit::array_shift_f(uint8_t arr[], uint16_t len, uint8_t newVal){
  for(uint16_t x = 0; x < len-1; x++){
    arr[x] = arr[x+1];
  }
  arr[len-1] = newVal;
  return 1;
}

/** @ingroup array
Shifts all values in an array left, and appends a new value to the last slot, allowing for a buffer or log.
@param arr The array to shift/append to
@param len Length of the array, since this cannot be calculated within the function due to pointers.
@param newVal The new value to add onto the end of the array
*/
int16_t ConnorKit::array_shift_f(int16_t arr[], uint16_t len, int16_t newVal){
  for(uint16_t x = 0; x < len-1; x++){
    arr[x] = arr[x+1];
  }
  arr[len-1] = newVal;
  return 1;
}

/** @ingroup array
Shifts all values in an array left, and appends a new value to the last slot, allowing for a buffer or log.
@param arr The array to shift/append to
@param len Length of the array, since this cannot be calculated within the function due to pointers.
@param newVal The new value to add onto the end of the array
*/
uint16_t ConnorKit::array_shift_f(uint16_t arr[], uint16_t len, uint16_t newVal){
  for(uint16_t x = 0; x < len-1; x++){
    arr[x] = arr[x+1];
  }
  arr[len-1] = newVal;
  return 1;
}

/** @ingroup array
Shifts all values in an array left, and appends a new value to the last slot, allowing for a buffer or log.
@param arr The array to shift/append to
@param len Length of the array, since this cannot be calculated within the function due to pointers.
@param newVal The new value to add onto the end of the array
*/
float ConnorKit::array_shift_f(float arr[], uint16_t len, float newVal){
  for(uint16_t x = 0; x < len-1; x++){
    arr[x] = arr[x+1];
  }
  arr[len-1] = newVal;
  return 1;
}

/** @ingroup array
Fills all items in an array with a specific value.
@param arr The array to fill
@param len Length of the array, since this cannot be calculated within the function due to pointers.
@param newVal The new value to fill the array with
*/
uint8_t ConnorKit::array_fill_f(uint8_t arr[], uint16_t len, uint8_t newVal){
  for(uint16_t x = 0; x < len; x++){
    arr[x] = newVal;
  }
  return 1;
}

/** @ingroup array
Fills all items in an array with a specific value.
@param arr The array to fill
@param len Length of the array, since this cannot be calculated within the function due to pointers.
@param newVal The new value to fill the array with
*/
int16_t ConnorKit::array_fill_f(int16_t arr[], uint16_t len, int16_t newVal){
  for(uint16_t x = 0; x < len; x++){
    arr[x] = newVal;
  }
  return 1;
}

/** @ingroup array
Fills all items in an array with a specific value.
@param arr The array to fill
@param len Length of the array, since this cannot be calculated within the function due to pointers.
@param newVal The new value to fill the array with
*/
uint16_t ConnorKit::array_fill_f(uint16_t arr[], uint16_t len, uint16_t newVal){
  for(uint16_t x = 0; x < len; x++){
    arr[x] = newVal;
  }
  return 1;
}

/** @ingroup array
Fills all items in an array with a specific value.
@param arr The array to fill
@param len Length of the array, since this cannot be calculated within the function due to pointers.
@param newVal The new value to fill the array with
*/
float ConnorKit::array_fill_f(float arr[], uint16_t len, float newVal){
  for(uint16_t x = 0; x < len; x++){
    arr[x] = newVal;
  }
  return 1;
}

/** @ingroup array
Returns the sum of all items in an array.
@param arr The array to sum
@param len Length of the array, since this cannot be calculated within the function due to pointers.
@returns The sum of array values
*/
uint16_t ConnorKit::array_sum_f(uint8_t arr[], uint16_t len){
	uint16_t sum = 0;
	for(uint16_t i = 0; i < len; i++){
		sum+=arr[i];
	}
	return sum;
}

/** @ingroup array
Returns the sum of all items in an array.
@param arr The array to sum
@param len Length of the array, since this cannot be calculated within the function due to pointers.
@returns The sum of array values
*/
int32_t ConnorKit::array_sum_f(int16_t arr[], uint16_t len){
	int32_t sum = 0;
	for(uint16_t i = 0; i < len; i++){
		sum+=arr[i];
	}
	return sum;
}

/** @ingroup array
Returns the sum of all items in an array.
@param arr The array to sum
@param len Length of the array, since this cannot be calculated within the function due to pointers.
@returns The sum of array values
*/
uint32_t ConnorKit::array_sum_f(uint16_t arr[], uint16_t len){
	uint32_t sum = 0;
	for(uint16_t i = 0; i < len; i++){
		sum+=arr[i];
	}
	return sum;
}

/** @ingroup array
Returns the sum of all items in an array.
@param arr The array to sum
@param len Length of the array, since this cannot be calculated within the function due to pointers.
@returns The sum of array values
*/
float ConnorKit::array_sum_f(float arr[], uint16_t len){
	float sum = 0;
	for(uint16_t i = 0; i < len; i++){
		sum+=arr[i];
	}
	return sum;
}

/** @ingroup array
Returns the average of all items in an array.
@param arr The array to average
@param len Length of the array, since this cannot be calculated within the function due to pointers.
@returns The average of array values
*/
uint8_t ConnorKit::array_average_f(uint8_t arr[], uint16_t len){
	float sum = array_sum_f(arr,len);
	return sum/float(len);
}

/** @ingroup array
Returns the average of all items in an array.
@param arr The array to average
@param len Length of the array, since this cannot be calculated within the function due to pointers.
@returns The average of array values
*/
int16_t ConnorKit::array_average_f(int16_t arr[], uint16_t len){
	float sum = array_sum_f(arr,len);
	return sum/float(len);
}

/** @ingroup array
Returns the average of all items in an array.
@param arr The array to average
@param len Length of the array, since this cannot be calculated within the function due to pointers.
@returns The average of array values
*/
uint16_t ConnorKit::array_average_f(uint16_t arr[], uint16_t len){
	float sum = array_sum_f(arr,len);
	return sum/float(len);
}

/** @ingroup array
Returns the average of all items in an array.
@param arr The array to average
@param len Length of the array, since this cannot be calculated within the function due to pointers.
@returns The average of array values
*/
float ConnorKit::array_average_f(float arr[], uint16_t len){
	float sum = array_sum_f(arr,len);
	return sum/float(len);
}

/** @ingroup array
Uses the combsort algorithm to sort the array from lowest to highest value.
@param arr The array to sort
@param len Length of the array, since this cannot be calculated within the function due to pointers.
*/
void ConnorKit::array_sort_f(uint8_t arr[], uint16_t len){
  uint8_t i, j;
  uint8_t gap;
  uint8_t swapped = 1;
  uint8_t temp;

  gap = len;
  while (gap > 1 || swapped == 1)
  {
    if (gap > 1)
    {
      gap = gap * 10/13;
      if (gap == 9 || gap == 10) gap = 11;
    }
    swapped = 0;
    for (i = 0, j = gap; j < len; i++, j++)
    {
      if (arr[i] > arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        swapped = 1;
      }
    }
  }
}

/** @ingroup array
Uses the combsort algorithm to sort the array from lowest to highest value.
@param arr The array to sort
@param len Length of the array, since this cannot be calculated within the function due to pointers.
*/
void ConnorKit::array_sort_f(int16_t arr[], uint16_t len){
  int16_t i, j;
  int16_t gap;
  int16_t swapped = 1;
  int16_t temp;

  gap = len;
  while (gap > 1 || swapped == 1)
  {
    if (gap > 1)
    {
      gap = gap * 10/13;
      if (gap == 9 || gap == 10) gap = 11;
    }
    swapped = 0;
    for (i = 0, j = gap; j < len; i++, j++)
    {
      if (arr[i] > arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        swapped = 1;
      }
    }
  }
}

/** @ingroup array
Uses the combsort algorithm to sort the array from lowest to highest value.
@param arr The array to sort
@param len Length of the array, since this cannot be calculated within the function due to pointers.
*/
void ConnorKit::array_sort_f(uint16_t arr[], uint16_t len){
  uint16_t i, j;
  uint16_t gap;
  uint16_t swapped = 1;
  uint16_t temp;

  gap = len;
  while (gap > 1 || swapped == 1)
  {
    if (gap > 1)
    {
      gap = gap * 10/13;
      if (gap == 9 || gap == 10) gap = 11;
    }
    swapped = 0;
    for (i = 0, j = gap; j < len; i++, j++)
    {
      if (arr[i] > arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        swapped = 1;
      }
    }
  }
}

/** @ingroup array
Uses the combsort algorithm to sort the array from lowest to highest value.
@param arr The array to sort
@param len Length of the array, since this cannot be calculated within the function due to pointers.
*/
void ConnorKit::array_sort_f(float arr[], uint16_t len){
  uint16_t i, j;
  uint16_t gap;
  uint16_t swapped = 1;
  uint16_t temp;

  gap = len;
  while (gap > 1 || swapped == 1)
  {
    if (gap > 1)
    {
      gap = gap * 10/13;
      if (gap == 9 || gap == 10) gap = 11;
    }
    swapped = 0;
    for (i = 0, j = gap; j < len; i++, j++)
    {
      if (arr[i] > arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        swapped = 1;
      }
    }
  }
}

//-------------------------------------------------------------------------

/** @ingroup array
Mirrors the input array. For example: {1,2,3,4,5} -> {5,4,3,2,1}
@param arr The array to reverse
@param len Length of the array, since this cannot be calculated within the function due to pointers.
*/
void ConnorKit::array_reverse_f(uint8_t arr[], uint16_t len){
  for(uint16_t i = 0; i < len/2; i++){
    uint8_t val1 = arr[i];
    uint8_t val2 = arr[len-1-i];
    arr[i] = val2;
    arr[len-1-i] = val1;
  }
}

/** @ingroup array
Mirrors the input array. For example: {1,2,3,4,5} -> {5,4,3,2,1}
@param arr The array to reverse
@param len Length of the array, since this cannot be calculated within the function due to pointers.
*/
void ConnorKit::array_reverse_f(int16_t arr[], uint16_t len){
  for(uint16_t i = 0; i < len/2; i++){
    int16_t val1 = arr[i];
    int16_t val2 = arr[len-1-i];
    arr[i] = val2;
    arr[len-1-i] = val1;
  }
}

/** @ingroup array
Mirrors the input array. For example: {1,2,3,4,5} -> {5,4,3,2,1}
@param arr The array to reverse
@param len Length of the array, since this cannot be calculated within the function due to pointers.
*/
void ConnorKit::array_reverse_f(uint16_t arr[], uint16_t len){
  for(uint16_t i = 0; i < len/2; i++){
    uint16_t val1 = arr[i];
    uint16_t val2 = arr[len-1-i];
    arr[i] = val2;
    arr[len-1-i] = val1;
  }
}

/** @ingroup array
Mirrors the input array. For example: {1,2,3,4,5} -> {5,4,3,2,1}
@param arr The array to reverse
@param len Length of the array, since this cannot be calculated within the function due to pointers.
*/
void ConnorKit::array_reverse_f(float arr[], uint16_t len){
  for(uint16_t i = 0; i < len/2; i++){
    float val1 = arr[i];
    float val2 = arr[len-1-i];
    arr[i] = val2;
    arr[len-1-i] = val1;
  }
}

/** @ingroup array
Shuffles the order of the input array. For example: {1,2,3,4,5} -> {4,2,1,5,3}
@param arr The array to shuffle
@param len Length of the array, since this cannot be calculated within the function due to pointers.
*/
void ConnorKit::array_shuffle_f(uint8_t arr[], uint16_t len){
for (size_t i = 0; i < len - 1; i++)
  {
    size_t j = random(0, len);

    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
  }  
}

/** @ingroup array
Shuffles the order of the input array. For example: {1,2,3,4,5} -> {4,2,1,5,3}
@param arr The array to shuffle
@param len Length of the array, since this cannot be calculated within the function due to pointers.
*/
void ConnorKit::array_shuffle_f(int16_t arr[], uint16_t len){
for (size_t i = 0; i < len - 1; i++)
  {
    size_t j = random(0, len);

    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
  }  
}

/** @ingroup array
Shuffles the order of the input array. For example: {1,2,3,4,5} -> {4,2,1,5,3}
@param arr The array to shuffle
@param len Length of the array, since this cannot be calculated within the function due to pointers.
*/
void ConnorKit::array_shuffle_f(uint16_t arr[], uint16_t len){
for (size_t i = 0; i < len - 1; i++)
  {
    size_t j = random(0, len);

    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
  }  
}

/** @ingroup array
Shuffles the order of the input array. For example: {1,2,3,4,5} -> {4,2,1,5,3}
@param arr The array to shuffle
@param len Length of the array, since this cannot be calculated within the function due to pointers.
*/
void ConnorKit::array_shuffle_f(float arr[], uint16_t len){
for (size_t i = 0; i < len - 1; i++)
  {
    size_t j = random(0, len);

    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
  }  
}

/** @ingroup audio
Generates a old-school polyphonic tone by quickly switching between frequencies, similar to techniques used in vintage ZX Spectrum music.
@param tonePin Pin to use for arpeggio output
@param freqs Array of frequencies to use, can be any number within reason
@param len Length of the frequency array, since this cannot be calculated within the function.
@param switchSpeed Time in milliseconds between playing each of the frequencies in the freqs array
@param duration Time in milliseconds to play the tones
*/
void ConnorKit::tone_multi_zx(uint8_t tonePin, int16_t freqs[], int16_t len, uint16_t switchSpeed, uint16_t duration) {
  long tStart = millis();
  long tEnd = tStart + duration;
  while (millis() < tEnd) {
    for (uint8_t i = 0; i < len; i++) {
      tone(tonePin, freqs[i]);
      delay(switchSpeed);
    }
  }
  noTone(tonePin);
}

/** @ingroup audio
Generates a slide from one frequency to another using interpolate()
@param tonePin Pin to use for slide output
@param toneStart Starting frequency (Hz)
@param toneEnd Ending frequency (Hz)
@param duration Duration of slide in milliseconds
@param cont Option to leave tone running after slide (optional, default=true)
*/
void ConnorKit::tone_slide(uint8_t tonePin, int16_t toneStart, int16_t toneEnd, uint16_t duration, bool cont = true) {
  float progress = 0;
  float push = 100.0 / float(duration);
  while (progress < 100) {
    uint16_t toneVal = interpolate(toneStart,toneEnd,progress);
    tone(tonePin, toneVal);

    progress += push;
    if (progress > 100) {
      progress = 100;
    }
    delayMicroseconds(850);
  }
  tone(tonePin, toneEnd);
  if(cont == false){
	noTone(tonePin);
  }
}

/** @ingroup audio
Generates an octave-based arpeggio from a base frequency
@param tonePin Pin to use for arpeggio output
@param freq Base frequency for arpeggio generation
@param arpSpeed Time in milliseconds between arpeggio notes
@param duration Time in milliseconds to play the arpeggio
*/
void ConnorKit::tone_arp(uint8_t tonePin, uint16_t freq, uint16_t arpSpeed, uint16_t duration){
  uint16_t freqLow = freq/2;
  uint16_t freqLowest = freq/4;
  uint16_t freqHigh = freq*2;
  uint16_t freqHighest = freq*4;
  long tStart = millis();
  long tEnd = tStart+duration;
  while(millis() < tEnd){
    tone(tonePin,freqHighest);
    delay(arpSpeed);
    tone(tonePin,freqLow);
    delay(arpSpeed);
    tone(tonePin,freq);
    delay(arpSpeed);
    tone(tonePin,freqLowest);
    delay(arpSpeed);
    tone(tonePin,freqHigh);
    delay(arpSpeed);
    tone(tonePin,freq);
    delay(arpSpeed);
  }
  noTone(tonePin);
}

/** @ingroup audio
Generates a ping-pong sweep between two frequencies using tone_slide()
@param tonePin Pin to use for siren output
@param freq1 Low frequency of siren (Hz)
@param freq2 High frequency of siren (Hz)
@param sirenSpeed Amount of time in milliseconds to sweep between the two frequencies
@param duration Duration of siren in milliseconds
*/
void ConnorKit::tone_siren(uint8_t tonePin, uint16_t freq1, uint16_t freq2, uint16_t sirenSpeed, uint16_t duration){
  long tStart = millis();
  long tEnd = tStart+duration;
  while(millis() < tEnd){
    tone_slide(tonePin,freq1,freq2,sirenSpeed);
    tone_slide(tonePin,freq2,freq1,sirenSpeed);
  }
  noTone(tonePin);
}

/** @ingroup audio
Generates digital noise using fast RNG
@param tonePin Pin to use for noise output
@param duration Duration of noise in milliseconds
*/
void ConnorKit::tone_noise(uint8_t tonePin, uint16_t duration) {
  uint16_t y = 0;
  long tStart = millis();
  long tEnd = tStart + duration;
  while (millis() < tEnd) {
    y = 0;
    y += micros(); // seeded with changing number
    y ^= y >> 7;
    y ^= y << 7;
    tone(tonePin, y);
  }
  noTone(tonePin);
}

/** @ingroup math
Allows for tweening between values using a fader value between 0.0 and 100.0. Useful for color fades and more.
@param val1 Value seen at 0% fade
@param val2 Value seen at 100% fade
@param fader Used to define interpolation value between val1 and val2.
@returns Interpolated value between val1 and val2, at fader percentage. For example: if val1 = 0, val2 = 25, and fader = 50(%) - then the output would be 12.5.
*/
uint8_t ConnorKit::interpolate(uint8_t val1, uint8_t val2, float fader){
  fader = fader/100.0;
  return val1*(1.00-fader) + val2*fader;
}

/** @ingroup math
Allows for tweening between values using a fader value between 0.0 and 100.0. Useful for color fades and more.
@param val1 Value seen at 0% fade
@param val2 Value seen at 100% fade
@param fader Used to define interpolation value between val1 and val2.
@returns Interpolated value between val1 and val2, at fader percentage. For example: if val1 = 0, val2 = 25, and fader = 50(%) - then the output would be 12.5.
*/
int16_t ConnorKit::interpolate(int16_t val1, int16_t val2, float fader){
  fader = fader/100.0;
  return val1*(1.00-fader) + val2*fader;
}

/** @ingroup math
Allows for tweening between values using a fader value between 0.0 and 100.0. Useful for color fades and more.
@param val1 Value seen at 0% fade
@param val2 Value seen at 100% fade
@param fader Used to define interpolation value between val1 and val2.
@returns Interpolated value between val1 and val2, at fader percentage. For example: if val1 = 0, val2 = 25, and fader = 50(%) - then the output would be 12.5.
*/
uint16_t ConnorKit::interpolate(uint16_t val1, uint16_t val2, float fader){
  fader = fader/100.0;
  return val1*(1.00-fader) + val2*fader;
}

/** @ingroup math
Allows for tweening between values using a fader value between 0.0 and 100.0. Useful for color fades and more.
@param val1 Value seen at 0% fade
@param val2 Value seen at 100% fade
@param fader Used to define interpolation value between val1 and val2.
@returns Interpolated value between val1 and val2, at fader percentage. For example: if val1 = 0, val2 = 25, and fader = 50(%) - then the output would be 12.5.
*/
float ConnorKit::interpolate(float val1, float val2, float fader){
  fader = fader/100.0;
  return val1*(1.00-fader) + val2*fader;
}

/** @ingroup misc
Fast pseudorandom generator!
@returns A int16_t value between -32,768 and 32,767.
*/
int16_t ConnorKit::rng() {
  static int y = 0;
  y += micros(); // seeded with changing number
  y ^= y << 2; y ^= y >> 7; y ^= y << 7;
  return (y);
}

/** @ingroup misc
Provides a safe software reset that checks if a bypass pin pulled LOW before timing out the Watchdog. This is a pure reset, as if you pressed the button.
@param soft_reset_bypass_pin If the pin specified here is pulled LOW, the reset will not happen - this makes sure you can't get stuck in a boot loop!
*/
void ConnorKit::soft_reset(uint8_t soft_reset_bypass_pin){
	pinMode(soft_reset_bypass_pin,INPUT_PULLUP);
	if(digitalRead(soft_reset_bypass_pin) != LOW){
		wdt_enable(WDTO_15MS); // WATCHDOG TIMEOUT 15 MS
		while (1) {
		//WAIT WAY LONGER THAN 15 MS AND WE'll RESET AUTOMATICALLY
		}
	}
}

/** @ingroup math
Prints a text-based graph to the Serial Monitor, plotting a value between a minimum and maximum over time, at a specified width of characters.
Must call Serial.begin() first!

Example output:
<pre>
0|            +                                        | 1023	1543.00
0|                +                                    | 1023	1546.00
0|                 +                                   | 1023	1549.00
0|              +                                      | 1023	1551.00
0|          +                                          | 1023	1554.00
0|         +                                           | 1023	1557.00
0|             +                                       | 1023	1560.00
0|                +                                    | 1023	1563.00
0|                 +                                   | 1023	1565.00
0|             +                                       | 1023	1568.00
0|          +                                          | 1023	1571.00
0|         +                                           | 1023	1574.00
0|              +                                      | 1023	1576.00
0|                 +                                   | 1023	1580.00
0|                +                                    | 1023	1583.00
0|            +                                        | 1023	1586.00
0|          +                                          | 1023	1588.00
0|          +                                          | 1023	1591.00
0|              +                                      | 1023	1594.00
0|                 +                                   | 1023	1597.00
0|                +                                    | 1023	1600.00
0|            +                                        | 1023	1602.00
0|         +                                           | 1023	1605.00
0|          +                                          | 1023	1608.00
</pre>

@param val The value to plot
@param mn The minimum value measurable
@param mx The maximum value measurable
@param time Can be used to log time, or the value of any variable.
@param graph_width The width of the graph in characters.
@param point The character used to mark val.
*/
void ConnorKit::print_graph(uint16_t val, uint16_t mn, uint16_t mx, float time, uint16_t graph_width, char point){
  float divisor = graph_width/float(mx);
  uint16_t mnG = mn*divisor;
  uint16_t valG = val*divisor;
  uint16_t mxG = mx*divisor;
  
  Serial.print(mn);
  Serial.print(F("| "));
  uint16_t index = mnG;
  while(index<=mxG){
    if(index == valG){
      Serial.print(point);
    }
    else{
      Serial.print(F(" "));
    }
    index++;
  }
  Serial.print(F(" | "));
  Serial.print(mx);
  Serial.print(F("\t"));
  Serial.println(time);
}

/** @ingroup misc
Measures the amount of time in microseconds that a function takes to complete. Not entirely accurate due to overhead, but pretty good for 1/100th millisecond accuracy. Allows the user to run the funtion up to 65,535 times and average the time taken.
@param func The function to measure execution time on. For example, "measure_time(helloWorldFunc)".
@param runs The number of times to measure execution time of the function
@return The execution time in microseconds
*/
float ConnorKit::measure_func_us(void (*func)(), uint16_t runs = 1){
  if(runs != 1){
    long tStart = micros();
    for(uint16_t i = 0; i < runs; i++){
  	  func();
    }
    long tEnd = micros();
    return (tEnd-tStart)/float(runs);
  }
  else{
	long tStart = micros();
  	func();
    long tEnd = micros();
    return (tEnd-tStart);
  }
}

/** @ingroup misc
Calculates the amount of time in microseconds that it would take to Serial.print a message of the specified length, at the specified baud rate. Not entirely accurate due to Arduino doing other things, but pretty good for 1/100th millisecond accuracy.
@param message_len Length of message to send in characters, not necessarily bytes. For example, a long type of value 1000000 is 7 in length of characters, not the 4 bytes consumed by long.
@param baud The Serial baud rate to use for calculation
@return The execution time in microseconds
*/
float ConnorKit::measure_tx_us(uint16_t message_len, uint32_t baud){
  float bitTime = 1.0/float(baud);
  float printTime = bitTime*message_len;
  return printTime*1000000;
}

/** @ingroup io
Sets a pin to the specified state for a specific duration in microseconds.
@param pin Arduino pin number to use
@param state The state to use for the pulse, HIGH/1/true or LOW/0/false
@param duration The pulse duration in microseconds
*/
void ConnorKit::pulse_out(uint8_t pin, uint8_t state, unsigned long duration){
	unsigned long tStart = micros();
	unsigned long tEnd = tStart+duration;
	digitalWriteFast(pin,state);
	while(micros() < tEnd){
		// WAIT
	}
	digitalWriteFast(pin,!state);	
}

// --------------------------------------------------------------
// Decimal/char to binary array ---------------------------------

/** @ingroup math
Converts an 8-bit decimal or char into a 8-bit binary array
@param input The input decimal or char
@param output The array to output values to, since functions can't return arrays
*/
void ConnorKit::byte_to_bin(byte input, byte output[]) {
  for(byte i = 0; i < 8; i++){
    output[i] = char(bitRead(input,7-i));
  }
}
// Uses 86 bytes of space
// --------------------------------------------------------------

// --------------------------------------------------------------
// Binary array to decimal/char ---------------------------------

/** @ingroup math
Converts an 8-bit binary array to an 8-bit decimal or char value
@param input The input binary array to read values from
@returns The converted 8-bit decimal or char
*/
byte ConnorKit::bin_to_byte(byte input[]) {
  byte output = 0;
  for(byte i = 0; i < 8; i++){
    bitWrite(output,7-i,input[i]);
  }
  return output;
}
// Uses 146 bytes of space
// --------------------------------------------------------------


/** @ingroup led
Holy shit - 10 parameters! Generates a fade between two RGB colors, using 3 PWM pins, using interpolate(). For example, some police lights:

<pre>
while(true){
	fade_color_pwm(255, 0, 0,   0,   0, 255, 9, 10, 11, 200);
	fade_color_pwm(0,   0, 255, 255, 0, 0,   9, 10, 11, 200);
}
</pre>

@param rStart Starting red value
@param gStart Starting green value
@param bStart Starting blue value
@param rEnd Ending red value
@param gEnd Ending green value
@param bEnd Ending blue value
@param rPin PWM pin used for red channel
@param gPin PWM pin used for green channel
@param bPin PWM pin used for blue channel
@param duration Time in milliseconds used for the fade.
*/
void ConnorKit::fade_color_pwm(uint8_t rStart, uint8_t gStart, uint8_t bStart,   uint8_t rEnd, uint8_t gEnd, uint8_t bEnd,   uint8_t rPin, uint8_t gPin, uint8_t bPin,   uint16_t duration) {
  float progress = 0;
  float push = 100.0 / float(duration);
  while (progress < 1) {
    uint8_t rVal = interpolate(rStart,rEnd,progress);
    uint8_t gVal = interpolate(rStart,rEnd,progress);
    uint8_t bVal = interpolate(rStart,rEnd,progress);

    analogWrite(rPin, rVal);
    analogWrite(gPin, gVal);
    analogWrite(bPin, bVal);

    progress += push;
    if (progress > 100) {
      progress = 100;
    }
    delay(1);
  }
  analogWrite(rPin, rEnd);
  analogWrite(gPin, gEnd);
  analogWrite(bPin, bEnd);
}

/** @ingroup math
Prints a char* with a border like so:
<pre>
Hello World!
=
############
Hello World!
############
</pre>
@param input The input string (char*)
@param len Length of the char array, since this cannot be calculated within the function due to pointers.
*/
void ConnorKit::print_title_f(char* input, uint16_t len){
  for(byte i = 0; i < len; i++){
    Serial.print("#");
  }
  Serial.println();
  
  Serial.println(input);
  
  for(byte i = 0; i < len; i++){
    Serial.print("#");
  }
  Serial.println();
}
