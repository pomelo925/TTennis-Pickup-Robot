from flask import Flask, request

app = Flask(__name__)

# 用於儲存每個按鈕的最新狀態
button1_status = 0
button2_status = 0
button_press_count = 0  # 累積按鈕按下的次數
button1_last = 0
button2_last = 0

@app.route('/')
def home():
    return f"Button press count: {button_press_count}"

@app.route('/update_button1', methods=['POST'])
def update_button1():
    global button1_status, button_press_count, button1_last
    try:
        raw_data = request.data
        # print(f"Raw data received from button 1: {raw_data}")
        
        # 解碼並儲存按鈕 1 的狀態
        button1_status = int(raw_data.decode('utf-8').strip())
        if (button1_status > button1_last) : button_press_count += 1  # 按一次累加一次
        print(f"Button 1 status updated: {button1_status}, Press count: {button_press_count}")
        button1_last = button1_status
    except Exception as e:
        print(f"Error processing button 1 request: {e}")
    return "Button 1 status updated", 200

@app.route('/update_button2', methods=['POST'])
def update_button2():
    global button2_status, button_press_count, button2_last
    try:
        raw_data = request.data
        # print(f"Raw data received from button 2: {raw_data}")
        
        # 解碼並儲存按鈕 2 的狀態
        button2_status = int(raw_data.decode('utf-8').strip())
        if (button2_status > button2_last) : button_press_count += 1  # 按一次累加一次
        print(f"Button 2 status updated: {button2_status}, Press count: {button_press_count}")
        button2_last = button2_status
    except Exception as e:
        print(f"Error processing button 2 request: {e}")
    return "Button 2 status updated", 200

if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5000)
