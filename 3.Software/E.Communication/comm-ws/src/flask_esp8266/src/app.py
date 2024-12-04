from flask import Flask, request # type: ignore
import json

app = Flask(__name__)

# 用於儲存每個按鈕的最新狀態
button1_press_count = 0  # 累積按鈕按下的次數
button2_press_count = 0  # 累積按鈕按下的次數
button1_last = 0
button2_last = 0

@app.route('/')
def home():
    return f"Button 1 press count: {button1_press_count}, Button 2 press count: {button2_press_count}"

@app.route('/update_buttons', methods=['POST'])
def update_buttons():
    global button1_press_count, button2_press_count, button1_last, button2_last
    try:
        # 獲取並解析 JSON 數據
        data = request.get_json()
        if data is None:
            return "Invalid JSON", 400

        button1_status = data.get("button1", 0)
        button2_status = data.get("button2", 0)

        # 確保只有在按下時才計數，避免抖動
        if button1_status == 1 and button1_last == 0:
            button1_press_count += 1
        if button2_status == 1 and button2_last == 0:
            button2_press_count += 1

        # 更新按鈕最後狀態
        button1_last = button1_status
        button2_last = button2_status

        print(f"Received: {data}, Total Press Count 1: {button1_press_count}, Total Press Count 2: {button2_press_count}")
        return "Button statuses updated", 200
    except Exception as e:
        print(f"Error: {e}")
        return "Internal Server Error", 500

if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5000)