# Builder tools for Meshright
 - install docker 
 - build docker image, for example :
  ```
  sudo docker build -t mshbuild:1 .
  ```
 - run docker image with volume which includes you codes
  ```
  sudo docker run -v "/mnt/hgfs/H/work/prog_julin/MrMesher:/MrMesher" -t -i mshbuild:1 /bin/bash
  ```
