pipeline {
    agent any

    stages {
        stage('Clone') {
            steps {
               git 'https://github.com/Sayali7721/DevOps.git'
           }
	}
        stage('Start') {
            steps {
		sh 'make'
            }
        }
    }
}

