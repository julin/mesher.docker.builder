# Builder tools for Meshright
 - [install docker](https://docs.docker.com/engine/installation/linux/docker-ee/ubuntu/) 
 - build docker image, for example :
  ```
  sudo docker build -t mshbuild:1 .
  ```
 - run docker image with volume which includes you codes
  ```
  sudo docker run -v "/mnt/hgfs/H/work/prog_julin/MrMesher:/MrMesher" -t -i mshbuild:1 /bin/bash
  ```
 - you can mount more folders in host machine like:
  ```
    sudo docker run -v "/mnt/hgfs/H/work/prog_julin/MrMesher:/MrMesher" -v "$(pwd):/hosthome" -t -i mshbuild:1 /bin/bash
  ```
  
  ## Build other 3rd party, for example occ7.1
  - CD to the folder which include occ7.1
  - start the docker a new docker image instance,then:
  ```
  sudo docker run -v "$(pwd):/occ7.1"  -t -i mshbuild:1 /bin/bash
  ```
  - inside the docker builder machine:
  ```
  mkdir occbuild 
  cd occbuild
  sudo cmake -DCMAKE_BUILD_TYPE:STRING=Release -D3RDPARTY_DIR:STRING=/occ7.1/3rd/linux64  /occ7.1/opencascade-7.1.0
  make 
  ```
  
