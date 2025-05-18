n
  rgb2d)
    COMMAND="/home/app/rgb2d/run.sh"
    ;;
  spatial)
    COMMAND="/home/app/spatial/run.sh"
    ;;
  spatial-ros)
    COMMAND="/home/app/spatial-ros/run.sh"
    ;;
  null)
    COMMAND="/bin/bash"
    ;;
  *)
    echo "Invalid mode: $1"
    usage
    ;;
esac



## 0. clean container within same group
echo "=== [EdgeNN] Build & Run ==="
echo "[EdgeNN] Remove Containers ..."
docker compose -p edgenn down --volumes --remove-orphans

## 1. make scripts & library executable
find ../C.EdgeNN -type f -name "*.sh" -exec sudo chmod +x {} \;

## 2. environment setup  
export COMMAND 
export DISPLAY=localhost:10.0
xhost +local:docker
cd docker

## 2. build image
echo "[EdgeNN] Building..."
docker compose -p edgenn build

## 3. deployment
echo "[EdgeNN] Deploying..."
docker compose -p edgenn up -d 