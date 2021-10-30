import 'package:flutter/material.dart';

class Result extends StatelessWidget {
  final int totalScore;
  final Function resetQuiz;

  Result(this.totalScore, this.resetQuiz);

  String get resultPhrase {
    var resultText = 'You did it !';
    if (totalScore <= 50) {
      resultText = 'You are awesome and innocent';
    } else if (totalScore <= 80) {
      resultText = 'You are ......Dr. Strange !!';
    } else {
      resultText = 'You are so GOOOOOOOOD !!!';
    }
    return resultText;
  }

  @override
  Widget build(BuildContext context) {
    return Center(
      child: Column(
        children: [
          Text(
            resultPhrase,
            style: TextStyle(
              fontSize: 28,
              fontFamily: 'Comic Sans MS',
              fontWeight: FontWeight.bold,
            ),
            textAlign: TextAlign.center,
          ),
          FlatButton(
              onPressed: resetQuiz,
              child: Text('Retake Quiz !!'),
              textColor: Colors.blue[600])
        ],
      ),
    );
  }
}
