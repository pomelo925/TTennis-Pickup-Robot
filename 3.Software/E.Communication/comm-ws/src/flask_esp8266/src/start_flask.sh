# download
sudo apt-get update
sudo apt-get install -y python3-pip
echo "alias python=python3" >> ~/.bashrc
source ~/.bashrc
pip install Flask
sudo apt-get --reinstall install python3-requests

# run python file
python app.py

# run ros file at another terminal

# cd /root/comm-ws &&
# source devel/setup.bash
# chmod +x /root/comm-ws/src/flask_esp8266/scripts/button_press_publisher.py

# rosrun flask_esp8266 button_press_publisher.py