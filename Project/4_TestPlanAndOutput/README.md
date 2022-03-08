## 1.1 HIGH LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output | Passed Or Not |
| --- | --- | --- | --- | --- | --- |
| 01 | Soil Sensor | 1 | 1 | 1 | ✅ |
| 01 | Soil Sensor | 0 | 0 | 0 |✅ |
| 02 | Temparature Sensor | 35 F | 35 F | 45 F | ❌ |
| 02 | Temparature Sensor | 100 F | 120 F | 120 F | ✅ |
| 03 | Dry Run preventer | 1 | 0 | 0 | ✅ |
| 03 | Dry Run preventer | 0 | 1 | 1 | ✅ |


## 1.2 LOW LEVEL TEST PLAN

| Test ID (soil sensor)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 02 | void led_on(byte led) | 1 | 1 | 1 | ✅ |
| 03 | void led_off(byte led) | 0 | 0 | 0 | ✅ |


| Test ID ADC| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | void buzzer_on(byte buzz)  | temp>100 F | 1 | 1 | ✅ |
| 02 | void buzzer_off(byte buzz) | temp>100 F | 0 | 0 | ✅ |

| Test ID (soil sensor)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 02 | void dryrun(byte motor) | 1 | 1 | 1 | ✅ |
| 03 | void dryrun(byte motor) | 0 | 0 | 0 | ✅ |
